function solution(participant, completion) {
    participant.sort();
    completion.sort();
    for (let idx = 0, size = participant.length; idx < size; idx++) {
      if (participant[idx] !== completion[idx]) {
        return participant[idx] ;
      }
    }
}