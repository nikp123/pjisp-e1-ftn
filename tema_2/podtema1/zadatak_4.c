#include <stdio.h>
#include <math.h>

#define Q_PI (M_PI/2.0)

typedef struct point {
	float x, y;
} point;

typedef struct side {
	float m, a;
} side;

void retrieve_point(char name, point *p) {
	int err;
	retry_point_x:
	printf("%c.x = ", name);
	err = scanf("%f", &p->x);	
	if(err != 1) goto retry_point_x;
	retry_point_y:
	printf("%c.y = ", name);
	err = scanf("%f", &p->y);	
	if(err != 1) goto retry_point_y;
}

float find_angle(float dx, float dy) {
	float mag = sqrt(dx*dx+dy*dy);

	if(dx > 0.0 && dy > 0.0) {
		return asin(dy/mag);
	} else if(dx < 0.0 && dy > 0.0) {
		return M_PI - asin(dy/mag);
	} else if(dx < 0.0 && dy < 0.0) {
		return -asin(dy/mag) - M_PI;
	} else if(dx > 0.0 && dy < 0.0) {
		return asin(dy/mag);
	}
}

side calc_side(point start, point end) {
	side ret;
	point diff;
	diff.x = end.x - start.x;
	diff.y = end.y - start.y;
	ret.m = sqrt(diff.x*diff.x + diff.y*diff.y);
	ret.a = find_angle(diff.x, diff.y);	

	return ret;
}

int main(int argc, char *argv[]) {
	point a, b, c, d;
	retrieve_point('a', &a);
	retrieve_point('b', &b);
	retrieve_point('c', &c);

	// napravi cetvrtu tacku
	d.x = c.x + b.x-a.x;
	d.y = c.y + b.y-a.y;

	// test deangle function
	//for(float i = 0; i < M_PI*2.0; i+=M_PI/12.0) {
	//	printf("angle = %f\n",
	//		find_angle(cos(i), sin(i)));
	//}

	side ab, ac;
	ab = calc_side(a, b);
	ac = calc_side(a, c);

	printf("Povrsina parallelograma je: %f\n",
		ab.m*ac.m*sin(ac.a-ab.a));
}

