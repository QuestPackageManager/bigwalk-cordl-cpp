#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplinePathRef.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Splines/zzzz__SplineRange_impl.hpp"
#include "UnityEngine/Splines/zzzz__SplinePathRef_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/Splines/zzzz__SplinePathRef_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineRange_def.hpp"
//  Writing Method size for method: ::UnityEngine::Splines::SplinePathRef_SliceRef._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplinePathRef_SliceRef::*)(int32_t, ::UnityEngine::Splines::SplineRange)>(&::UnityEngine::Splines::SplinePathRef_SliceRef::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18217b710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplinePathRef_SliceRef*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Splines::SplineRange>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Splines::SplinePathRef_SliceRef::__cordl_internal_get_Index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Index;
}
constexpr int32_t const& UnityEngine::Splines::SplinePathRef_SliceRef::__cordl_internal_get_Index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Index;
}
constexpr void UnityEngine::Splines::SplinePathRef_SliceRef::__cordl_internal_set_Index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Index = value;
}
constexpr ::UnityEngine::Splines::SplineRange& UnityEngine::Splines::SplinePathRef_SliceRef::__cordl_internal_get_Range()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Range;
}
constexpr ::UnityEngine::Splines::SplineRange const& UnityEngine::Splines::SplinePathRef_SliceRef::__cordl_internal_get_Range() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Range;
}
constexpr void UnityEngine::Splines::SplinePathRef_SliceRef::__cordl_internal_set_Range(::UnityEngine::Splines::SplineRange  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Range = value;
}
inline void UnityEngine::Splines::SplinePathRef_SliceRef::_ctor(int32_t  splineIndex, ::UnityEngine::Splines::SplineRange  range)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplinePathRef_SliceRef*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Splines::SplineRange>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, splineIndex, range);
}
inline ::UnityEngine::Splines::SplinePathRef_SliceRef* UnityEngine::Splines::SplinePathRef_SliceRef::New_ctor(int32_t  splineIndex, ::UnityEngine::Splines::SplineRange  range)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Splines::SplinePathRef_SliceRef*>(splineIndex, range));
}
// Ctor Parameters []
constexpr ::UnityEngine::Splines::SplinePathRef_SliceRef::SplinePathRef_SliceRef()   {
}
//  Writing Method size for method: ::UnityEngine::Splines::SplinePathRef._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplinePathRef::*)()>(&::UnityEngine::Splines::SplinePathRef::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplinePathRef*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplinePathRef._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplinePathRef::*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::SplinePathRef_SliceRef*>*)>(&::UnityEngine::Splines::SplinePathRef::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18217c9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplinePathRef*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::SplinePathRef_SliceRef*>*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Splines::SplinePathRef_SliceRef*>& UnityEngine::Splines::SplinePathRef::__cordl_internal_get_Splines()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Splines;
}
constexpr ::ArrayW<::UnityEngine::Splines::SplinePathRef_SliceRef*> const& UnityEngine::Splines::SplinePathRef::__cordl_internal_get_Splines() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Splines;
}
constexpr void UnityEngine::Splines::SplinePathRef::__cordl_internal_set_Splines(::ArrayW<::UnityEngine::Splines::SplinePathRef_SliceRef*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Splines = value;
}
inline void UnityEngine::Splines::SplinePathRef::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplinePathRef*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplinePathRef::_ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::SplinePathRef_SliceRef*>*  slices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplinePathRef*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::SplinePathRef_SliceRef*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, slices);
}
inline ::UnityEngine::Splines::SplinePathRef* UnityEngine::Splines::SplinePathRef::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Splines::SplinePathRef*>());
}
inline ::UnityEngine::Splines::SplinePathRef* UnityEngine::Splines::SplinePathRef::New_ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::SplinePathRef_SliceRef*>*  slices)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Splines::SplinePathRef*>(slices));
}
// Ctor Parameters []
constexpr ::UnityEngine::Splines::SplinePathRef::SplinePathRef()   {
}
