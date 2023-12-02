class Point {
    // __________________________________________ Private Part __________________________________________
    private:
        // __________ Atributs __________
        float x;                                                // Coordinate according to x
        float y;                                                // Coordinate according to y

    // ___________________________________________ Public Part __________________________________________
    public:
        // __________ Builders __________
        Point();                                                // Default builder
        Point(float xCoord, float yCoord);                      // Builder with values

        // __________ Methods ___________
        void setCoordinates(float xCoord, float yCoord);        // Set the point with coordinates
        void translate(float deltaX, float deltaY);             // Move the point
        float distanceTo(const Point& otherPoint) const;        // Calculate distance between both points

        // _________ Accessors __________
        float getX() const;                                     // Recovery X
        float getY() const;                                     // Recovery Y
};

