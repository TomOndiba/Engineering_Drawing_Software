//
//  main.cpp
//  COP290
//
//  Created by Rahul Bansal on 12/03/18.
//  Copyright © 2018 Rahul Bansal. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std ;


/*! A Class for a general 3D point */
class Point
{
public:
    double x_coordinate; /*!< X Coordinate of that point */
    double y_coordinate; /*!< X Coordinate of that point */
    double z_coordinate; /*!< X Coordinate of that point */
    
    /*! Function for obtaining the x-coordinate of a point */
    double get_x_coordinate(Point a){
        return x_coordinate;
    }
    /*! Function for obtaining the y-coordinate of a point */
    double get_y_coordinate(Point a){
        return y_coordinate;
    }
    /*! Function for obtaining the z-coordinate of a point */
    double get_z_coordinate(Point a){
        return z_coordinate;
    }
    
};
/*! A Class for a genric edge connecting two points */
class Edge
{
public:
    Point first_point;	/*!< First point of the line */
    Point second_point;	/*!< Second point of the line */
    
    /*! Function for obtaining the first point of a line */
    Point get_first_point(Edge a){
        return first_point;
    }
    
    /*! Function for obtaining the second point of a line */
    Point get_second_point(Edge a){
        return second_point;
    }
    /*! Function for obtaining the length of a line */
    double edge_length(Edge a){
        return 1.00;
    }
};

/*! A Class for the 3D input figure */
class input_3D
{
private:
    
    /*! To obtain the input of the 3D figure from the User on the Graphical Interface */
    void input_3D_figure(){
        
    }
    
	/*! CONSTRUCTOR OF THE CLASS */
    input_3D();
    
    Point points[999999999];	/*!< Array of set of points which constitute the 3D figure */
    
    /*! To fill up the array of points with all the points from the 3D input */
    void	fill_points(){
        
    }
	
    /*! To check that if the 3D input is rotated or not */
    bool to_rotate(){
        return false;
    }
    
    double rotation_matrix[3][3];	/*!< Rotation matrix */
    
    /*! To get rotated set of points  */
    void get_rotated_points(double matrix[3][3]){
        
    }
    
};

/*! A Class for the 2D input figure */
class input_2D
{
private:
    
    /*! To obtain the input of the 2D figure from the User on the Graphical Interface */
    void input_2D_figure(){
        
    }
    
    /*! CONSTRUCTOR OF THE CLASS */
    input_2D();
    
    Point points_first_plane[999999999];    /*!< Array of set of points of the first orthographic view */
    Point points_second_plane[999999999];    /*!< Array of set of points of the second orthographic view */
    Edge edges_first_view[999999999];    /*!< Array of set of edges of the first orthographic view */
    Edge edges_second_view[999999999];    /*!< Array of set of edges of the second orthographic view */
    
    /*! To fill up the array of points with all the points from the 2D input */
    void fill_points(){
        
    }
    
    /*! To fill up the array of edges with all the edges from the 2D input */
    void fill_edges(){
        
    }
    
};

/*! A Class for the plane of type ax + by + cz = d */
class Plane
{
 public:
    int coefficents[4];	/*!< coefficents=[a,b,c,d] */
    
    /*! CONSTRUCTOR OF THE CLASS */
    Plane();
    
};

class Graph
{
 private:
    Point points[999999999];    /*!< Array of set of points in a graph */
    Edge edges[999999999];	/*!< Array of set of edges in a graph */
    
    /*! To fill up the array of points in a 3D graph */
    void fill_points(){
        
    }
    
    /*! To fill up the array of edges in a 3D graph */
    void fill_edges(){
        
    }
    
    /*! Returns the two points that make up the edge */
    Point get_points(Edge e){
        Point a= Point();
        return a;
    }
};

/*! A Class for selecting the mode of operation i.e 3D to 2D OR 2D to 3D */
class OperationType
{
public:
    int mode_of_operation;  /*!< For selecting the mode of operation*/
    
    /*! Function for selecting the mode of operation*/
    void select_operation(){
    }
    /*! CONSTRUCTOR OF THE CLASS */
    OperationType();
    /*! DE-CONSTRUCTOR OF THE CLASS */
    ~OperationType();
    
    class convet_3D_to_2D
    {
    private:
        Point projected_points[999999999];    /*!< Array of set of projection of points on the plane given */
        Point lablled_points[999999999];    /*!< Array of set of projection of points that get labelled acoording to the division of the plane  */
        int frequncy_points[999999999];    /*!< Frequecy of the points that get lablled  */
        Edge edges[1000000];    /*!< Edges present in the projected 2D image  */
        
        /*! CONSTRUCTOR OF THE CLASS */
        convet_3D_to_2D();
        
        /*! To get the set of projected points on the plane of the 3D figure */
        void get_projected_points(Plane p,input_3D i){
            
        }
        
        /*! To get the set of labelled points on the plane of the 3D figure */
        void get_labelled_points(Point projected[999999999],Point labelled[999999999]){
            
        }
        
        /*! To get the frequency of labelled points on the plane of the 3D figure */
        void get_frequency_of_points(Point projected[999999999],Point labelled[999999999]){
            
        }
        
        /*! To get the set of projected edges on the plane of the 3D figure */
        void get_edges(Point projected[999999999],Point labelled[999999999]){
            
        }
        
        /*! To display the projection on the Graphical Interface */
        void project_image(Point labelled[999999999],Edge edges[1000000],int frequency[999999999]){
            
        }
        
    };
    
    class covert_2D_to_3D
    {
        Graph g =Graph();
        
        /*! To construct a 3D Graph using the two 2D inputs with all the possible edges */
        void make_graph(input_2D i,Graph g){
            
        }
        /*! To take the 2D projection of this graph G on the two othographic Planes and check if the projection is same as the input.*/
        bool check_same(input_2D i,Graph g){
            return false;
        }
        
        /*! Delete the uncommon edges: All the edges that are not present in either of the given views but present in the 3D graph are deleted. */
        void delete_uncommon_edges(input_2D i,Graph g){
            
        }
        
        /*! To display the final 3D figure on the Graphical interface */
        void display_graph(Graph g){
            
        }
    };
};



