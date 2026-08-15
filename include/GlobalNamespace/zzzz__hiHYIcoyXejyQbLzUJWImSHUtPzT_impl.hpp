#pragma once
// IWYU pragma private; include "GlobalNamespace/hiHYIcoyXejyQbLzUJWImSHUtPzT.hpp"
#include "GlobalNamespace/zzzz__nxSccnjzMkUjLoMzgjhhzPVcPAxF_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__hiHYIcoyXejyQbLzUJWImSHUtPzT_def.hpp"
#include "GlobalNamespace/zzzz__hiHYIcoyXejyQbLzUJWImSHUtPzT_def.hpp"
#include "GlobalNamespace/zzzz__nxSccnjzMkUjLoMzgjhhzPVcPAxF_def.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__NativeBuffer_def.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__RingBuffer_1_def.hpp"
#include "Rewired/Utils/Classes/Utility/zzzz__ObjectPool_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo::*)(int32_t, int32_t, int32_t, int32_t, int32_t, bool, bool)>(&::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181ab93a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo.CalculateTouch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo::*)(::by_ref<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData>)>(&::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo::CalculateTouch)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181ab92a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo*>(),
                        {"CalculateTouch", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo::__cordl_internal_get_maxTouches()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxTouches;
}
constexpr int32_t const& GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo::__cordl_internal_get_maxTouches() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxTouches;
}
constexpr void GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo::__cordl_internal_set_maxTouches(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxTouches = value;
}
constexpr int32_t& GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo::__cordl_internal_get_minX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minX;
}
constexpr int32_t const& GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo::__cordl_internal_get_minX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minX;
}
constexpr void GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo::__cordl_internal_set_minX(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minX = value;
}
constexpr int32_t& GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo::__cordl_internal_get_maxX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxX;
}
constexpr int32_t const& GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo::__cordl_internal_get_maxX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxX;
}
constexpr void GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo::__cordl_internal_set_maxX(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxX = value;
}
constexpr int32_t& GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo::__cordl_internal_get_minY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minY;
}
constexpr int32_t const& GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo::__cordl_internal_get_minY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minY;
}
constexpr void GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo::__cordl_internal_set_minY(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minY = value;
}
constexpr int32_t& GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo::__cordl_internal_get_maxY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxY;
}
constexpr int32_t const& GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo::__cordl_internal_get_maxY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxY;
}
constexpr void GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo::__cordl_internal_set_maxY(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxY = value;
}
constexpr bool& GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo::__cordl_internal_get_invertY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invertY;
}
constexpr bool const& GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo::__cordl_internal_get_invertY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invertY;
}
constexpr void GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo::__cordl_internal_set_invertY(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___invertY = value;
}
constexpr bool& GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo::__cordl_internal_get_reverseY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverseY;
}
constexpr bool const& GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo::__cordl_internal_get_reverseY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverseY;
}
constexpr void GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo::__cordl_internal_set_reverseY(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reverseY = value;
}
inline void GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo::_ctor(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3, int32_t  _cordl_fixed_empty_name_whitespace_param_4, bool  _cordl_fixed_empty_name_whitespace_param_5, bool  _cordl_fixed_empty_name_whitespace_param_6)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5, _cordl_fixed_empty_name_whitespace_param_6);
}
inline void GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo::CalculateTouch(::by_ref<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo*>(),
                        {"CalculateTouch", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo* GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo::New_ctor(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3, int32_t  _cordl_fixed_empty_name_whitespace_param_4, bool  _cordl_fixed_empty_name_whitespace_param_5, bool  _cordl_fixed_empty_name_whitespace_param_6)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5, _cordl_fixed_empty_name_whitespace_param_6));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo()   {
}
//  Writing Method size for method: ::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData::*)()>(&::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData::Clear)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181ab91f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "touchId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "timeStamp", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "isTouching", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "positionRawX", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "positionRawY", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "positionX", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "positionY", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "positionAbsX", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "positionAbsY", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData(int32_t  touchId, float_t  timeStamp, bool  isTouching, int32_t  positionRawX, int32_t  positionRawY, float_t  positionX, float_t  positionY, int32_t  positionAbsX, int32_t  positionAbsY) noexcept  {
this->touchId = touchId;
this->timeStamp = timeStamp;
this->isTouching = isTouching;
this->positionRawX = positionRawX;
this->positionRawY = positionRawY;
this->positionX = positionX;
this->positionY = positionY;
this->positionAbsX = positionAbsX;
this->positionAbsY = positionAbsY;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData()   {
}
//  Writing Method size for method: ::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_KkjYIEMhvLWSXazITtslaQvvNbHe._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_KkjYIEMhvLWSXazITtslaQvvNbHe::*)(int32_t)>(&::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_KkjYIEMhvLWSXazITtslaQvvNbHe::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181ab5b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_KkjYIEMhvLWSXazITtslaQvvNbHe*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData>& GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_KkjYIEMhvLWSXazITtslaQvvNbHe::__cordl_internal_get_TtqLochiAxjmYCGNmCcJDXcfIhykc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TtqLochiAxjmYCGNmCcJDXcfIhykc;
}
constexpr ::ArrayW<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData> const& GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_KkjYIEMhvLWSXazITtslaQvvNbHe::__cordl_internal_get_TtqLochiAxjmYCGNmCcJDXcfIhykc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TtqLochiAxjmYCGNmCcJDXcfIhykc;
}
constexpr void GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_KkjYIEMhvLWSXazITtslaQvvNbHe::__cordl_internal_set_TtqLochiAxjmYCGNmCcJDXcfIhykc(::ArrayW<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TtqLochiAxjmYCGNmCcJDXcfIhykc = value;
}
inline void GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_KkjYIEMhvLWSXazITtslaQvvNbHe::_ctor(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_KkjYIEMhvLWSXazITtslaQvvNbHe*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_KkjYIEMhvLWSXazITtslaQvvNbHe* GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_KkjYIEMhvLWSXazITtslaQvvNbHe::New_ctor(int32_t  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_KkjYIEMhvLWSXazITtslaQvvNbHe*>(_cordl_fixed_empty_name_whitespace));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_KkjYIEMhvLWSXazITtslaQvvNbHe::hiHYIcoyXejyQbLzUJWImSHUtPzT_KkjYIEMhvLWSXazITtslaQvvNbHe()   {
}
//  Writing Method size for method: ::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT::*)(uint8_t, ::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo*, ::GlobalNamespace::nxSccnjzMkUjLoMzgjhhzPVcPAxF_HIDInfo*, int32_t, ::System::Action_2<::Rewired::Utils::Classes::Data::NativeBuffer*,::ArrayW<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData>>*)>(&::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT::_ctor)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x181aa3d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT*>(),
                        {".ctor", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo*>(), ::i2c::type_of<::GlobalNamespace::nxSccnjzMkUjLoMzgjhhzPVcPAxF_HIDInfo*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_2<::Rewired::Utils::Classes::Data::NativeBuffer*,::ArrayW<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT.OFIiDcepaxSqPPNwhLRzqdMSuGgk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT::*)(::Rewired::Utils::Classes::Data::NativeBuffer*, double_t)>(&::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT::OFIiDcepaxSqPPNwhLRzqdMSuGgk)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x181aa3b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT*>(),
                    {::i2c::class_of<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT.pJJnqZHVjOBZhkaWiayUDRHHmNib
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT::*)()>(&::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT::pJJnqZHVjOBZhkaWiayUDRHHmNib)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x181aa3f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT*>(),
                        {"pJJnqZHVjOBZhkaWiayUDRHHmNib", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT.zXwqlkyleJMWIQjDfePHIPIdXiac
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT::*)(int32_t)>(&::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT::zXwqlkyleJMWIQjDfePHIPIdXiac)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181aa4140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT*>(),
                        {"zXwqlkyleJMWIQjDfePHIPIdXiac", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT.gDpAFgjhIqytZijJMIVdgqLZFCJp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_KkjYIEMhvLWSXazITtslaQvvNbHe* (::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT::*)()>(&::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT::gDpAFgjhIqytZijJMIVdgqLZFCJp)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181aa3eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT*>(),
                        {"gDpAFgjhIqytZijJMIVdgqLZFCJp", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo*& GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT::__cordl_internal_get_pzXUvJBjYSyFeuptiIHAjNeSXMQA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pzXUvJBjYSyFeuptiIHAjNeSXMQA;
}
constexpr ::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo* const& GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT::__cordl_internal_get_pzXUvJBjYSyFeuptiIHAjNeSXMQA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pzXUvJBjYSyFeuptiIHAjNeSXMQA;
}
constexpr void GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT::__cordl_internal_set_pzXUvJBjYSyFeuptiIHAjNeSXMQA(::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pzXUvJBjYSyFeuptiIHAjNeSXMQA = value;
}
constexpr ::Rewired::Utils::Classes::Data::RingBuffer_1<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_KkjYIEMhvLWSXazITtslaQvvNbHe*>*& GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT::__cordl_internal_get_TFvDlBFEIKZBNHMGpUuZJIoPEtfK()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TFvDlBFEIKZBNHMGpUuZJIoPEtfK;
}
constexpr ::Rewired::Utils::Classes::Data::RingBuffer_1<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_KkjYIEMhvLWSXazITtslaQvvNbHe*>* const& GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT::__cordl_internal_get_TFvDlBFEIKZBNHMGpUuZJIoPEtfK() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TFvDlBFEIKZBNHMGpUuZJIoPEtfK;
}
constexpr void GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT::__cordl_internal_set_TFvDlBFEIKZBNHMGpUuZJIoPEtfK(::Rewired::Utils::Classes::Data::RingBuffer_1<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_KkjYIEMhvLWSXazITtslaQvvNbHe*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TFvDlBFEIKZBNHMGpUuZJIoPEtfK = value;
}
constexpr ::ArrayW<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData>& GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT::__cordl_internal_get_BvISMIWiwGHJvCsiKeGiYlIzaWjZ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BvISMIWiwGHJvCsiKeGiYlIzaWjZ;
}
constexpr ::ArrayW<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData> const& GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT::__cordl_internal_get_BvISMIWiwGHJvCsiKeGiYlIzaWjZ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BvISMIWiwGHJvCsiKeGiYlIzaWjZ;
}
constexpr void GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT::__cordl_internal_set_BvISMIWiwGHJvCsiKeGiYlIzaWjZ(::ArrayW<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BvISMIWiwGHJvCsiKeGiYlIzaWjZ = value;
}
constexpr ::System::Action_2<::Rewired::Utils::Classes::Data::NativeBuffer*,::ArrayW<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData>>*& GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT::__cordl_internal_get_WfHzBLkfpDBhpsJNfGTdkWTTuREh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WfHzBLkfpDBhpsJNfGTdkWTTuREh;
}
constexpr ::System::Action_2<::Rewired::Utils::Classes::Data::NativeBuffer*,::ArrayW<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData>>* const& GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT::__cordl_internal_get_WfHzBLkfpDBhpsJNfGTdkWTTuREh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WfHzBLkfpDBhpsJNfGTdkWTTuREh;
}
constexpr void GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT::__cordl_internal_set_WfHzBLkfpDBhpsJNfGTdkWTTuREh(::System::Action_2<::Rewired::Utils::Classes::Data::NativeBuffer*,::ArrayW<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WfHzBLkfpDBhpsJNfGTdkWTTuREh = value;
}
constexpr ::ArrayW<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData>& GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT::__cordl_internal_get_mKZFqMYzoATFBpnSLAPXYvhBgRey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mKZFqMYzoATFBpnSLAPXYvhBgRey;
}
constexpr ::ArrayW<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData> const& GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT::__cordl_internal_get_mKZFqMYzoATFBpnSLAPXYvhBgRey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mKZFqMYzoATFBpnSLAPXYvhBgRey;
}
constexpr void GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT::__cordl_internal_set_mKZFqMYzoATFBpnSLAPXYvhBgRey(::ArrayW<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mKZFqMYzoATFBpnSLAPXYvhBgRey = value;
}
constexpr ::Rewired::Utils::Classes::Utility::ObjectPool_1<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_KkjYIEMhvLWSXazITtslaQvvNbHe*>*& GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT::__cordl_internal_get_qghCRZrxflbfOukOiVkFHILirqPC()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___qghCRZrxflbfOukOiVkFHILirqPC;
}
constexpr ::Rewired::Utils::Classes::Utility::ObjectPool_1<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_KkjYIEMhvLWSXazITtslaQvvNbHe*>* const& GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT::__cordl_internal_get_qghCRZrxflbfOukOiVkFHILirqPC() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___qghCRZrxflbfOukOiVkFHILirqPC;
}
constexpr void GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT::__cordl_internal_set_qghCRZrxflbfOukOiVkFHILirqPC(::Rewired::Utils::Classes::Utility::ObjectPool_1<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_KkjYIEMhvLWSXazITtslaQvvNbHe*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___qghCRZrxflbfOukOiVkFHILirqPC = value;
}
inline void GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT::_ctor(uint8_t  _cordl_fixed_empty_name_whitespace, ::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo*  _cordl_fixed_empty_name_whitespace_param_1, ::GlobalNamespace::nxSccnjzMkUjLoMzgjhhzPVcPAxF_HIDInfo*  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3, ::System::Action_2<::Rewired::Utils::Classes::Data::NativeBuffer*,::ArrayW<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData>>*  _cordl_fixed_empty_name_whitespace_param_4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT*>(),
                        {".ctor", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo*>(), ::i2c::type_of<::GlobalNamespace::nxSccnjzMkUjLoMzgjhhzPVcPAxF_HIDInfo*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_2<::Rewired::Utils::Classes::Data::NativeBuffer*,::ArrayW<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4);
}
inline void GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT::OFIiDcepaxSqPPNwhLRzqdMSuGgk(::Rewired::Utils::Classes::Data::NativeBuffer*  _cordl_fixed_empty_name_whitespace, double_t  _cordl_fixed_empty_name_whitespace_param_1)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT::pJJnqZHVjOBZhkaWiayUDRHHmNib()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT*>(),
                        {"pJJnqZHVjOBZhkaWiayUDRHHmNib", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT::zXwqlkyleJMWIQjDfePHIPIdXiac(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT*>(),
                        {"zXwqlkyleJMWIQjDfePHIPIdXiac", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_KkjYIEMhvLWSXazITtslaQvvNbHe* GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT::gDpAFgjhIqytZijJMIVdgqLZFCJp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT*>(),
                        {"gDpAFgjhIqytZijJMIVdgqLZFCJp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_KkjYIEMhvLWSXazITtslaQvvNbHe*>(this, ___internal_method);
}
inline ::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT* GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT::New_ctor(uint8_t  _cordl_fixed_empty_name_whitespace, ::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchpadInfo*  _cordl_fixed_empty_name_whitespace_param_1, ::GlobalNamespace::nxSccnjzMkUjLoMzgjhhzPVcPAxF_HIDInfo*  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3, ::System::Action_2<::Rewired::Utils::Classes::Data::NativeBuffer*,::ArrayW<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT_TouchData>>*  _cordl_fixed_empty_name_whitespace_param_4)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::hiHYIcoyXejyQbLzUJWImSHUtPzT::hiHYIcoyXejyQbLzUJWImSHUtPzT()   {
}
