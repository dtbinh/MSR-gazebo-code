#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
    DESTDIR_ARG="--root=$DESTDIR"
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/dasc/Ruilin/MSR-gazebo-code/msr_ws/src/mavros/mavros"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/dasc/Ruilin/MSR-gazebo-code/msr_ws/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/dasc/Ruilin/MSR-gazebo-code/msr_ws/install/lib/python2.7/dist-packages:/home/dasc/Ruilin/MSR-gazebo-code/msr_ws/build/mavros/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/dasc/Ruilin/MSR-gazebo-code/msr_ws/build/mavros" \
    "/usr/bin/python" \
    "/home/dasc/Ruilin/MSR-gazebo-code/msr_ws/src/mavros/mavros/setup.py" \
    build --build-base "/home/dasc/Ruilin/MSR-gazebo-code/msr_ws/build/mavros" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/dasc/Ruilin/MSR-gazebo-code/msr_ws/install" --install-scripts="/home/dasc/Ruilin/MSR-gazebo-code/msr_ws/install/bin"
