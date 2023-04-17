cc_binary(
    name = "my_project",
    srcs = ["main.cc"],
    deps = ["//:my_project_lib"]
)

cc_library(
    name = "my_project_lib",
    srcs = glob([
        "demo/**/*.cc"
    ]),
    hdrs = glob([
        "include/**/*.h",
    ]),
    linkstatic = True,
    strip_include_prefix = "",
    copts = ["-std=c++17"],
    linkopts = ["-pthread"],
    visibility = ["//visibility:public"],
)