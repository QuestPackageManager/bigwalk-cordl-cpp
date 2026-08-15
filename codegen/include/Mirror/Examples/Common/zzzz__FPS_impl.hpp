#pragma once
// IWYU pragma private; include "Mirror/Examples/Common/FPS.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Mirror/Examples/Common/zzzz__FPS_def.hpp"
//  Writing Method size for method: ::Mirror::Examples::Common::FPS.get_framesPerSecond
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mirror::Examples::Common::FPS::*)()>(&::Mirror::Examples::Common::FPS::get_framesPerSecond)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Common::FPS*>(),
                        {"get_framesPerSecond", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Common::FPS.set_framesPerSecond
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Common::FPS::*)(int32_t)>(&::Mirror::Examples::Common::FPS::set_framesPerSecond)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803164e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Common::FPS*>(),
                        {"set_framesPerSecond", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Common::FPS.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Common::FPS::*)()>(&::Mirror::Examples::Common::FPS::Update)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18155a290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Common::FPS*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Common::FPS.OnGUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Common::FPS::*)()>(&::Mirror::Examples::Common::FPS::OnGUI)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18155a1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Common::FPS*>(),
                        {"OnGUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Common::FPS._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Common::FPS::*)()>(&::Mirror::Examples::Common::FPS::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18155a320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Common::FPS*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Mirror::Examples::Common::FPS::__cordl_internal_get__framesPerSecond_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____framesPerSecond_k__BackingField;
}
constexpr int32_t const& Mirror::Examples::Common::FPS::__cordl_internal_get__framesPerSecond_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____framesPerSecond_k__BackingField;
}
constexpr void Mirror::Examples::Common::FPS::__cordl_internal_set__framesPerSecond_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____framesPerSecond_k__BackingField = value;
}
constexpr bool& Mirror::Examples::Common::FPS::__cordl_internal_get_showGUI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showGUI;
}
constexpr bool const& Mirror::Examples::Common::FPS::__cordl_internal_get_showGUI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showGUI;
}
constexpr void Mirror::Examples::Common::FPS::__cordl_internal_set_showGUI(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showGUI = value;
}
constexpr bool& Mirror::Examples::Common::FPS::__cordl_internal_get_showLog()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showLog;
}
constexpr bool const& Mirror::Examples::Common::FPS::__cordl_internal_get_showLog() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showLog;
}
constexpr void Mirror::Examples::Common::FPS::__cordl_internal_set_showLog(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showLog = value;
}
constexpr int32_t& Mirror::Examples::Common::FPS::__cordl_internal_get_count()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___count;
}
constexpr int32_t const& Mirror::Examples::Common::FPS::__cordl_internal_get_count() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___count;
}
constexpr void Mirror::Examples::Common::FPS::__cordl_internal_set_count(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___count = value;
}
constexpr double_t& Mirror::Examples::Common::FPS::__cordl_internal_get_startTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startTime;
}
constexpr double_t const& Mirror::Examples::Common::FPS::__cordl_internal_get_startTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startTime;
}
constexpr void Mirror::Examples::Common::FPS::__cordl_internal_set_startTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startTime = value;
}
inline int32_t Mirror::Examples::Common::FPS::get_framesPerSecond()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Common::FPS*>(),
                        {"get_framesPerSecond", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Mirror::Examples::Common::FPS::set_framesPerSecond(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Common::FPS*>(),
                        {"set_framesPerSecond", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::Examples::Common::FPS::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Common::FPS*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::Common::FPS::OnGUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Common::FPS*>(),
                        {"OnGUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::Common::FPS::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Common::FPS*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::Examples::Common::FPS* Mirror::Examples::Common::FPS::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Examples::Common::FPS*>());
}
// Ctor Parameters []
constexpr ::Mirror::Examples::Common::FPS::FPS()   {
}
