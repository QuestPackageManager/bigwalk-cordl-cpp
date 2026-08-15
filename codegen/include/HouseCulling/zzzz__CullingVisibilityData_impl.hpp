#pragma once
// IWYU pragma private; include "HouseCulling/CullingVisibilityData.hpp"
#include "HouseCulling/zzzz__CullingRegion_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "HouseCulling/zzzz__CullingVisibilityData_def.hpp"
#include "HouseCulling/zzzz__CullingRegion_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::HouseCulling::CullingVisibilityData.GetFromMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HouseCulling::CullingVisibilityData::*)(int32_t, int32_t)>(&::HouseCulling::CullingVisibilityData::GetFromMatrix)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803bf350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseCulling::CullingVisibilityData*>(),
                        {"GetFromMatrix", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseCulling::CullingVisibilityData.SetMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseCulling::CullingVisibilityData::*)(int32_t, int32_t, bool)>(&::HouseCulling::CullingVisibilityData::SetMatrix)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803bf460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseCulling::CullingVisibilityData*>(),
                        {"SetMatrix", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseCulling::CullingVisibilityData.GetMatrixIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::HouseCulling::CullingVisibilityData::*)(int32_t, int32_t)>(&::HouseCulling::CullingVisibilityData::GetMatrixIndex)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803bf440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseCulling::CullingVisibilityData*>(),
                        {"GetMatrixIndex", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseCulling::CullingVisibilityData.GetIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<int32_t> (::HouseCulling::CullingVisibilityData::*)(::HouseCulling::CullingRegion*)>(&::HouseCulling::CullingVisibilityData::GetIndex)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1803bf390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseCulling::CullingVisibilityData*>(),
                        {"GetIndex", {}, {::i2c::type_of<::HouseCulling::CullingRegion*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseCulling::CullingVisibilityData.CheckVisiblity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HouseCulling::CullingVisibilityData::*)(::HouseCulling::CullingRegion*, ::HouseCulling::CullingRegion*)>(&::HouseCulling::CullingVisibilityData::CheckVisiblity)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1803bf290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseCulling::CullingVisibilityData*>(),
                        {"CheckVisiblity", {}, {::i2c::type_of<::HouseCulling::CullingRegion*>(), ::i2c::type_of<::HouseCulling::CullingRegion*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseCulling::CullingVisibilityData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseCulling::CullingVisibilityData::*)()>(&::HouseCulling::CullingVisibilityData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseCulling::CullingVisibilityData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::HouseCulling::CullingRegion>>& HouseCulling::CullingVisibilityData::__cordl_internal_get_allRegions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allRegions;
}
constexpr ::ArrayW<::UnityW<::HouseCulling::CullingRegion>> const& HouseCulling::CullingVisibilityData::__cordl_internal_get_allRegions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allRegions;
}
constexpr void HouseCulling::CullingVisibilityData::__cordl_internal_set_allRegions(::ArrayW<::UnityW<::HouseCulling::CullingRegion>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allRegions = value;
}
constexpr ::ArrayW<bool>& HouseCulling::CullingVisibilityData::__cordl_internal_get_dataMatrix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dataMatrix;
}
constexpr ::ArrayW<bool> const& HouseCulling::CullingVisibilityData::__cordl_internal_get_dataMatrix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dataMatrix;
}
constexpr void HouseCulling::CullingVisibilityData::__cordl_internal_set_dataMatrix(::ArrayW<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dataMatrix = value;
}
inline bool HouseCulling::CullingVisibilityData::GetFromMatrix(int32_t  indexA, int32_t  indexB)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseCulling::CullingVisibilityData*>(),
                        {"GetFromMatrix", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, indexA, indexB);
}
inline void HouseCulling::CullingVisibilityData::SetMatrix(int32_t  indexA, int32_t  indexB, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseCulling::CullingVisibilityData*>(),
                        {"SetMatrix", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indexA, indexB, value);
}
inline int32_t HouseCulling::CullingVisibilityData::GetMatrixIndex(int32_t  indexA, int32_t  indexB)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseCulling::CullingVisibilityData*>(),
                        {"GetMatrixIndex", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, indexA, indexB);
}
inline ::System::Nullable_1<int32_t> HouseCulling::CullingVisibilityData::GetIndex(::HouseCulling::CullingRegion*  region)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseCulling::CullingVisibilityData*>(),
                        {"GetIndex", {}, {::i2c::type_of<::HouseCulling::CullingRegion*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int32_t>>(this, ___internal_method, region);
}
inline bool HouseCulling::CullingVisibilityData::CheckVisiblity(::HouseCulling::CullingRegion*  a, ::HouseCulling::CullingRegion*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseCulling::CullingVisibilityData*>(),
                        {"CheckVisiblity", {}, {::i2c::type_of<::HouseCulling::CullingRegion*>(), ::i2c::type_of<::HouseCulling::CullingRegion*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, a, b);
}
inline void HouseCulling::CullingVisibilityData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseCulling::CullingVisibilityData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HouseCulling::CullingVisibilityData* HouseCulling::CullingVisibilityData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HouseCulling::CullingVisibilityData*>());
}
// Ctor Parameters []
constexpr ::HouseCulling::CullingVisibilityData::CullingVisibilityData()   {
}
