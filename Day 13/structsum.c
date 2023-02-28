#include<stdio.h>

void main(){
 typedef struct Point {
  int x, y;
 } Point;
 
 Point sum(Point p1, Point p2){
  Point temp;
  temp.x = p1.x + p2.x;
  temp.y = p1.y + p2.y;
  return temp;
 }
 
 Point p1 = {10, 20}, p2 = {5, 10};
 Point ans = sum(p1,p2);
 
 printf("x:%d and y:%d\n", ans.x, ans.y);
 
}
