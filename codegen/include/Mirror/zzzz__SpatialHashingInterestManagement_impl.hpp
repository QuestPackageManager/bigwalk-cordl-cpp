#pragma once
// IWYU pragma private; include "Mirror/SpatialHashingInterestManagement.hpp"
#include "Mirror/zzzz__Grid2D_1_impl.hpp"
#include "Mirror/zzzz__InterestManagement_impl.hpp"
#include "Mirror/zzzz__SpatialHashingInterestManagement_def.hpp"
#include "Mirror/zzzz__NetworkConnectionToClient_def.hpp"
#include "Mirror/zzzz__NetworkIdentity_def.hpp"
#include "Mirror/zzzz__SpatialHashingInterestManagement_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::SpatialHashingInterestManagement_CheckMethod::SpatialHashingInterestManagement_CheckMethod(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Mirror::SpatialHashingInterestManagement_CheckMethod::SpatialHashingInterestManagement_CheckMethod()   {
}
constexpr ::Mirror::SpatialHashingInterestManagement_CheckMethod  Mirror::SpatialHashingInterestManagement_CheckMethod::XZ_FOR_3D{static_cast<int32_t>(0x0)};
constexpr ::Mirror::SpatialHashingInterestManagement_CheckMethod  Mirror::SpatialHashingInterestManagement_CheckMethod::XY_FOR_2D{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::Mirror::SpatialHashingInterestManagement.get_resolution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mirror::SpatialHashingInterestManagement::*)()>(&::Mirror::SpatialHashingInterestManagement::get_resolution)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18152f050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SpatialHashingInterestManagement*>(),
                        {"get_resolution", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SpatialHashingInterestManagement.ProjectToGrid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2Int (::Mirror::SpatialHashingInterestManagement::*)(::UnityEngine::Vector3)>(&::Mirror::SpatialHashingInterestManagement::ProjectToGrid)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18152ed20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SpatialHashingInterestManagement*>(),
                        {"ProjectToGrid", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SpatialHashingInterestManagement.OnCheckObserver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::SpatialHashingInterestManagement::*)(::Mirror::NetworkIdentity*, ::Mirror::NetworkConnectionToClient*)>(&::Mirror::SpatialHashingInterestManagement::OnCheckObserver)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x18152ea90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::SpatialHashingInterestManagement*>(),
                    {::i2c::class_of<::Mirror::SpatialHashingInterestManagement*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SpatialHashingInterestManagement.OnRebuildObservers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SpatialHashingInterestManagement::*)(::Mirror::NetworkIdentity*, ::System::Collections::Generic::HashSet_1<::Mirror::NetworkConnectionToClient*>*)>(&::Mirror::SpatialHashingInterestManagement::OnRebuildObservers)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18152ec40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::SpatialHashingInterestManagement*>(),
                    {::i2c::class_of<::Mirror::SpatialHashingInterestManagement*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SpatialHashingInterestManagement.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SpatialHashingInterestManagement::*)()>(&::Mirror::SpatialHashingInterestManagement::Reset)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18152ed90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::SpatialHashingInterestManagement*>(),
                    {::i2c::class_of<::Mirror::SpatialHashingInterestManagement*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SpatialHashingInterestManagement.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SpatialHashingInterestManagement::*)()>(&::Mirror::SpatialHashingInterestManagement::Update)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x18152ede0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SpatialHashingInterestManagement*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SpatialHashingInterestManagement._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SpatialHashingInterestManagement::*)()>(&::Mirror::SpatialHashingInterestManagement::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18152eff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SpatialHashingInterestManagement*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Mirror::SpatialHashingInterestManagement::__cordl_internal_get_visRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visRange;
}
constexpr int32_t const& Mirror::SpatialHashingInterestManagement::__cordl_internal_get_visRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visRange;
}
constexpr void Mirror::SpatialHashingInterestManagement::__cordl_internal_set_visRange(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___visRange = value;
}
constexpr float_t& Mirror::SpatialHashingInterestManagement::__cordl_internal_get_rebuildInterval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rebuildInterval;
}
constexpr float_t const& Mirror::SpatialHashingInterestManagement::__cordl_internal_get_rebuildInterval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rebuildInterval;
}
constexpr void Mirror::SpatialHashingInterestManagement::__cordl_internal_set_rebuildInterval(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rebuildInterval = value;
}
constexpr double_t& Mirror::SpatialHashingInterestManagement::__cordl_internal_get_lastRebuildTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRebuildTime;
}
constexpr double_t const& Mirror::SpatialHashingInterestManagement::__cordl_internal_get_lastRebuildTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRebuildTime;
}
constexpr void Mirror::SpatialHashingInterestManagement::__cordl_internal_set_lastRebuildTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastRebuildTime = value;
}
constexpr ::Mirror::SpatialHashingInterestManagement_CheckMethod& Mirror::SpatialHashingInterestManagement::__cordl_internal_get_checkMethod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkMethod;
}
constexpr ::Mirror::SpatialHashingInterestManagement_CheckMethod const& Mirror::SpatialHashingInterestManagement::__cordl_internal_get_checkMethod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkMethod;
}
constexpr void Mirror::SpatialHashingInterestManagement::__cordl_internal_set_checkMethod(::Mirror::SpatialHashingInterestManagement_CheckMethod  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___checkMethod = value;
}
constexpr bool& Mirror::SpatialHashingInterestManagement::__cordl_internal_get_showSlider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showSlider;
}
constexpr bool const& Mirror::SpatialHashingInterestManagement::__cordl_internal_get_showSlider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showSlider;
}
constexpr void Mirror::SpatialHashingInterestManagement::__cordl_internal_set_showSlider(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showSlider = value;
}
constexpr ::Mirror::Grid2D_1<::Mirror::NetworkConnectionToClient*>& Mirror::SpatialHashingInterestManagement::__cordl_internal_get_grid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grid;
}
constexpr ::Mirror::Grid2D_1<::Mirror::NetworkConnectionToClient*> const& Mirror::SpatialHashingInterestManagement::__cordl_internal_get_grid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grid;
}
constexpr void Mirror::SpatialHashingInterestManagement::__cordl_internal_set_grid(::Mirror::Grid2D_1<::Mirror::NetworkConnectionToClient*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grid = value;
}
inline int32_t Mirror::SpatialHashingInterestManagement::get_resolution()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SpatialHashingInterestManagement*>(),
                        {"get_resolution", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Vector2Int Mirror::SpatialHashingInterestManagement::ProjectToGrid(::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SpatialHashingInterestManagement*>(),
                        {"ProjectToGrid", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int>(this, ___internal_method, position);
}
inline bool Mirror::SpatialHashingInterestManagement::OnCheckObserver(::Mirror::NetworkIdentity*  identity, ::Mirror::NetworkConnectionToClient*  newObserver)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SpatialHashingInterestManagement*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, identity, newObserver);
}
inline void Mirror::SpatialHashingInterestManagement::OnRebuildObservers(::Mirror::NetworkIdentity*  identity, ::System::Collections::Generic::HashSet_1<::Mirror::NetworkConnectionToClient*>*  newObservers)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SpatialHashingInterestManagement*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, identity, newObservers);
}
inline void Mirror::SpatialHashingInterestManagement::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SpatialHashingInterestManagement*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::SpatialHashingInterestManagement::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SpatialHashingInterestManagement*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::SpatialHashingInterestManagement::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SpatialHashingInterestManagement*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::SpatialHashingInterestManagement* Mirror::SpatialHashingInterestManagement::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::SpatialHashingInterestManagement*>());
}
// Ctor Parameters []
constexpr ::Mirror::SpatialHashingInterestManagement::SpatialHashingInterestManagement()   {
}
