# Ruby on Rails practice
========
### https://www.gitbook.com/book/rorlab/railsguidebook/details
This practice was referenced by famous Korean ROR book '초레가'

### 실습 요약

1. 최초 생성

```bash
$ rails new rcafe
```

2. 실행해서 확인해 보기 

c9에서 실행해 보려면 추가 인수가 필요하다.

```bash
$ cd rcafe
$ bin/rails -p $PORT -b $IP 
```

3. Gemfile 편집

Gemfile에 다음 내용을 추가한다.

```ruby
gem 'bootstrap-sass', '~> 3.3.3'
gem 'simple_form', '3.1.0'
```

4. 
