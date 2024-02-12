# My Project

## PDF Subject

<!-- Assuming the images are in the "images" directory -->
{% for i in range(1, 13) %}
![Page {{ i }}](images/cpp03_page-{{ "%04d" % i }}.jpg)
{% endfor %}
