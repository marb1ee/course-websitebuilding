<div class="img-info">
      <img src="[field:litpic/]" alt="">
      <div class="title">
        <p class="data">最新上传<span>[field:pubdate function=strftime('%Y-%m-%d',@me)/]</span></p>
        <p class="text">[field:title/]</p>
        <p class="briefly"><i class="layui-icon layui-icon-user"></i>[field:writer /]</p>
      </div>
    </div>
    <div class="img-list">
      <div class="layui-fluid" style="padding:0">
        <div class="layui-row layui-col-space30 space">
          {dede:arclist titlelen='60' row='15' typeid='1'}
          <div class="layui-col-xs12 layui-col-sm4 layui-col-md4">
            <div class="item">
              <img src="[field:litpic/]">
              <div class="cont-text">
                <div class="data">[field:pubdate function=strftime('%Y-%m-%d',@me)/]</div>
                <p class="address"><span>[field:title/]</span></p>
                <p class="briefly"><i class="layui-icon layui-icon-user"></i>[field:writer /]</p>
                
              </div>
            </div>
          </div>