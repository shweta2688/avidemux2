INCLUDE(vf_plugin)


SET(ADM_vf_swapUV_SRCS swapUV.cpp)

ADD_VIDEO_FILTER(ADM_vf_swapUV ${ADM_vf_swapUV_SRCS})

INIT_VIDEO_FILTER(ADM_vf_swapUV)
INSTALL_VIDEO_FILTER(ADM_vf_swapUV)
