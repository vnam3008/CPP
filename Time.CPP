std::chrono::time_point<std::chrono::high_resolution_clock> start, end;
start = std::chrono::high_resolution_clock::now();
        
$0
    
end = std::chrono::high_resolution_clock::now();
int elapsed_time = std::chrono::duration_cast<std::chrono::milliseconds>(end-start).count();
cerr << "\nElapsed Time: " << elapsed_time << "ms\n";
