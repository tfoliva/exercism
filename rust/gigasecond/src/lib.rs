use chrono::{DateTime, Utc};

// Returns a Utc DateTime one billion seconds after start.
pub fn after(start: DateTime<Utc>) -> DateTime<Utc> {
    let delta_time = chrono::Duration::seconds(1e9 as i64);
    start + delta_time
}
