Semaphore seat[N]; // N binary semaphores for N seats

// Initialization
for (int i = 0; i < N; i++) {
    seat[i] = 1; // seat is initially free
}

// Booking function
void book_seat(int seat_number) {
    wait(seat[seat_number]);   // acquire lock on the seat
    // Check and book if not already booked
    if (is_available(seat_number)) {
        mark_booked(seat_number);
        print("Seat booked successfully!");
    } else {
        print("Seat already booked.");
    }
    signal(seat[seat_number]); // release lock
}