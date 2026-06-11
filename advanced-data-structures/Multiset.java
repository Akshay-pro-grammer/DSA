import java.util.HashMap;
//i have used this datastructure so many times and i didnt know it was called multiset, so here is my implementation of multiset
class Multiset<T> {
    private HashMap<T, Integer> map = new HashMap<>();

    public void add(T element) {
        map.put(element, map.getOrDefault(element, 0) + 1);
    }

    public void remove(T element) {
        if (map.containsKey(element)) {
            int count = map.get(element);
            if (count == 1) {
                map.remove(element);
            } else {
                map.put(element, count - 1);
            }
        }
    }

    public int count(T element) {
        return map.getOrDefault(element, 0);
    }

    public boolean contains(T element) {
        return map.containsKey(element);
    }
}
