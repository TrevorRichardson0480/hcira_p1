#pragma once
#include "Point.h"
#include "Rectangle.h"
#include "TemplateMap.h"
#include <vector>
using namespace std;


void resample(vector<Point>& points, int n, vector<Point>& resampled); //Resample a points path into n evenly spaced points
float pathLength(vector<Point>& points); //Calculate entire path length for resampling
void rotateToZero(vector<Point>& points, int n, vector<Point>& rotated);
void rotateBy(vector<Point>& points, int n, double theta, vector<Point>& rotated);
Rectangle BoundingBox(vector<Point> points); // creates a box within x and y min / max
vector<Point> ScaleTo(vector<Point> points, double size);
Point Centroid(vector<Point> points); // finds centroid of shape
vector<Point> TranslateTo(vector<Point> points, Point point);
pair<string, double> Recognize(vector<Point>& points, TemplateMap templates);
double DistanceAtBestAngle(vector<Point>& points, vector<Point>& compare, double thetaA, double thetaB, double thetaDelta);
double DistanceAtAngle(vector<Point>& points, vector<Point>& compare, double theta);
double PathDistance(vector<Point>& points, vector<Point>& compare);