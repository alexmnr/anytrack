
from geometry_msgs.msg import Point
from visualization_msgs.msg import Marker

def create_line(start_p, end_p, ns, id, frame, time, color=(255, 255, 255, 255), lifetime=(0, 100000000)):
    marker = Marker()
    marker.header.frame_id = frame
    marker.header.stamp = time
    marker.id = id
    marker.ns = ns
    marker.action = marker.ADD
    marker.lifetime.sec = lifetime[0]
    marker.lifetime.nanosec = lifetime[1]
    marker.type = 4
    
    marker.scale.x = 0.010
    marker.scale.y = 0.0
    marker.scale.z = 0.0

    marker.color.a = 1.0
    marker.color.r = color[1]/255
    marker.color.g = color[2]/255
    marker.color.b = color[3]/255
    start = Point()
    start.x = float(start_p[0])
    start.y = float(start_p[1])
    start.z = float(start_p[2])
    end = Point()
    end.x = float(end_p[0])  
    end.y = float(end_p[1])
    end.z = float(end_p[2])  
    marker.points = [start, end]
    return marker

def create_point(point, ns, id, frame, time, color=(255, 255, 255, 255), lifetime=(0, 100000000)):
    marker = Marker()
    marker.header.frame_id = frame
    marker.header.stamp = time
    marker.id = id
    marker.ns = ns
    marker.action = marker.ADD
    marker.lifetime.sec = lifetime[0]
    marker.lifetime.nanosec = lifetime[1]
    marker.type = 2
    
    
    marker.scale.x = 0.05
    marker.scale.y = 0.05
    marker.scale.z = 0.05

    marker.color.a = 1.0
    marker.color.r = color[1]/255
    marker.color.g = color[2]/255
    marker.color.b = color[3]/255
    pose = Point()
    pose.x = float(point[0])
    pose.y = float(point[1])
    pose.z = float(point[2])
    marker.pose.position = pose
    return marker
