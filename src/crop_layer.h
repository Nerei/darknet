#ifndef CROP_LAYER_H
#define CROP_LAYER_H

#include "image.h"
#include "params.h"
#include "layer.h"

typedef layer crop_layer;

image get_crop_image(crop_layer l);
crop_layer make_crop_layer(int batch, int h, int w, int c, int crop_height, int crop_width, int flip, float angle, float saturation, float exposure);
void forward_crop_layer(const crop_layer l, network_state state);

#ifdef GPU
void forward_crop_layer_gpu(crop_layer l, network_state state);
#endif

#endif

