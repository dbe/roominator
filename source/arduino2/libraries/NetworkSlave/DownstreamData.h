class DownstreamData {
  public:
    bool getCurrentReservation();
    void setCurrentReservation(bool value);
    bool getPendingReservation();
    void setPendingReservation(bool value);
    char* getDisplayString();
    void setDisplayString(char *value);
    
  private:
    bool currentReservation;
    bool pendingReservation;
    char *displayString;
}