create table kdd_cup_1999 ( duration int, protocol_type varchar(50), service varchar(10),flag varchar(10) , src_bytes int ,dst_bytes int , land int , wrong_fragment int , urgent int , hot int , num_failed_logins int, logged_in int , lnum_compromised int , lroot_shell int , lsu_attempted int ,lnum_root int ,lnum_file_creations int ,lnum_shells int ,lnum_access_files int ,lnum_outbound_cmds int ,is_host_login int, is_guest_login int , count int,srv_count int ,serror_rate int, srv_serror_rate int , rerror_rate int ,srv_rerror_rate int , same_srv_rate int , diff_srv_rate int , srv_diff_host_rate int , dst_host_count int , dst_host_srv_count int , dst_host_same_srv_rate int , dst_host_diff_srv_rate int , dst_host_same_src_port_rate int, dst_host_srv_diff_host_rate int , dst_host_serror_rate int , dst_host_srv_serror_rate int , dst_host_rerror_rate int , dst_host_srv_rerror_rate int , label varchar(10) );