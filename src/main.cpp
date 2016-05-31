
#include <iostream>

int main(int argc, char** argv) {

	std::cout << "---Simple Raytracer---" << std::endl 
		<< "Rendering..." << std::endl;

	return 0;
}

// Ray tracing algorithm
/*
for (int j = 0; j < image_height; ++j) {
	for (int i = 0; i < image_width; i++) {

		// Compute primary ray direction
		Ray prim_ray;
		computePrimRay(i, j, &prim_ray);

		// shoot prim ray in the scene and search for intersection
		Point p_hit;
		Normal n_hit;
		float min_dist = INFINITY;
		Object object = NULL;
		for (int k = 0; k < objects.size(); ++k) {
			if (Intersect(objects[k], prim_ray, $p_hit, $n_hit)) {
				float distance = Distance(eye_position, p_hit);
				if (distance < min_dist) {
					object = objects[k];
					min_dist = distance;	// update min distance
				}
			}
		}

		if (object != NULL) {
			// compute illumination
			Ray shadow_ray;
			shadow_ray.direction = light_pos - p_hit;
			bool is_in_shadow = false;
			for (int k = 0; k < objects.size(); ++k) {
				if (Intersect(objects[k], shadow_ray)) {
					is_in_shadow = true;
					break;
				}
			}
		}

		if (is_in_shadow)
			pixels[i][j] = 0;
		else
			pixels[i][j] = object->color * light.brightness;
	}
}
*/
