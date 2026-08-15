#pragma once
// IWYU pragma private; include "MA/Flora/FloraTerrainProvider.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "MA/Flora/zzzz__FloraTerrainProvider_def.hpp"
#include "MA/Flora/zzzz__FloraSystem_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/zzzz__TerrainChangedFlags_def.hpp"
#include "UnityEngine/zzzz__TerrainData_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
//  Writing Method size for method: ::MA::Flora::FloraTerrainProvider.RefreshAllTerrainDetails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::MA::Flora::FloraTerrainProvider::RefreshAllTerrainDetails)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1814f34f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraTerrainProvider*>(),
                        {"RefreshAllTerrainDetails", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraTerrainProvider.add_TerrainDataChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::UnityW<::UnityEngine::Terrain>,::UnityEngine::TerrainChangedFlags>*)>(&::MA::Flora::FloraTerrainProvider::add_TerrainDataChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1814f3600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraTerrainProvider*>(),
                        {"add_TerrainDataChanged", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::Terrain>,::UnityEngine::TerrainChangedFlags>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraTerrainProvider.remove_TerrainDataChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::UnityW<::UnityEngine::Terrain>,::UnityEngine::TerrainChangedFlags>*)>(&::MA::Flora::FloraTerrainProvider::remove_TerrainDataChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1814f3760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraTerrainProvider*>(),
                        {"remove_TerrainDataChanged", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::Terrain>,::UnityEngine::TerrainChangedFlags>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraTerrainProvider.get_Terrain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Terrain> (::MA::Flora::FloraTerrainProvider::*)()>(&::MA::Flora::FloraTerrainProvider::get_Terrain)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814f3720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraTerrainProvider*>(),
                        {"get_Terrain", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraTerrainProvider.get_TerrainData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::TerrainData> (::MA::Flora::FloraTerrainProvider::*)()>(&::MA::Flora::FloraTerrainProvider::get_TerrainData)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814f36b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraTerrainProvider*>(),
                        {"get_TerrainData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraTerrainProvider.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraTerrainProvider::*)()>(&::MA::Flora::FloraTerrainProvider::OnEnable)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1814f3340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraTerrainProvider*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraTerrainProvider.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraTerrainProvider::*)()>(&::MA::Flora::FloraTerrainProvider::OnDisable)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1814f3290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraTerrainProvider*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraTerrainProvider.OnSystemWasCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraTerrainProvider::*)(::MA::Flora::FloraSystem*)>(&::MA::Flora::FloraTerrainProvider::OnSystemWasCreated)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814f3400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraTerrainProvider*>(),
                        {"OnSystemWasCreated", {}, {::i2c::type_of<::MA::Flora::FloraSystem*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraTerrainProvider.OnTerrainChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraTerrainProvider::*)(::UnityEngine::TerrainChangedFlags)>(&::MA::Flora::FloraTerrainProvider::OnTerrainChanged)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1814f3430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraTerrainProvider*>(),
                        {"OnTerrainChanged", {}, {::i2c::type_of<::UnityEngine::TerrainChangedFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraTerrainProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraTerrainProvider::*)()>(&::MA::Flora::FloraTerrainProvider::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraTerrainProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Terrain>& MA::Flora::FloraTerrainProvider::__cordl_internal_get_m_Terrain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Terrain;
}
constexpr ::UnityW<::UnityEngine::Terrain> const& MA::Flora::FloraTerrainProvider::__cordl_internal_get_m_Terrain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Terrain;
}
constexpr void MA::Flora::FloraTerrainProvider::__cordl_internal_set_m_Terrain(::UnityW<::UnityEngine::Terrain>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Terrain = value;
}
inline void MA::Flora::FloraTerrainProvider::setStaticF_TerrainDataChanged(::System::Action_2<::UnityW<::UnityEngine::Terrain>,::UnityEngine::TerrainChangedFlags>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::UnityW<::UnityEngine::Terrain>,::UnityEngine::TerrainChangedFlags>*, "TerrainDataChanged", ::MA::Flora::FloraTerrainProvider*>(std::forward<::System::Action_2<::UnityW<::UnityEngine::Terrain>,::UnityEngine::TerrainChangedFlags>*>(value));
}
inline ::System::Action_2<::UnityW<::UnityEngine::Terrain>,::UnityEngine::TerrainChangedFlags>* MA::Flora::FloraTerrainProvider::getStaticF_TerrainDataChanged()  {
return ::cordl_internals::getStaticField<::System::Action_2<::UnityW<::UnityEngine::Terrain>,::UnityEngine::TerrainChangedFlags>*, "TerrainDataChanged", ::MA::Flora::FloraTerrainProvider*>();
}
inline void MA::Flora::FloraTerrainProvider::RefreshAllTerrainDetails()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraTerrainProvider*>(),
                        {"RefreshAllTerrainDetails", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void MA::Flora::FloraTerrainProvider::add_TerrainDataChanged(::System::Action_2<::UnityW<::UnityEngine::Terrain>,::UnityEngine::TerrainChangedFlags>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraTerrainProvider*>(),
                        {"add_TerrainDataChanged", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::Terrain>,::UnityEngine::TerrainChangedFlags>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void MA::Flora::FloraTerrainProvider::remove_TerrainDataChanged(::System::Action_2<::UnityW<::UnityEngine::Terrain>,::UnityEngine::TerrainChangedFlags>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraTerrainProvider*>(),
                        {"remove_TerrainDataChanged", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::Terrain>,::UnityEngine::TerrainChangedFlags>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Terrain> MA::Flora::FloraTerrainProvider::get_Terrain()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraTerrainProvider*>(),
                        {"get_Terrain", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Terrain>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::TerrainData> MA::Flora::FloraTerrainProvider::get_TerrainData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraTerrainProvider*>(),
                        {"get_TerrainData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TerrainData>>(this, ___internal_method);
}
inline void MA::Flora::FloraTerrainProvider::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraTerrainProvider*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MA::Flora::FloraTerrainProvider::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraTerrainProvider*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MA::Flora::FloraTerrainProvider::OnSystemWasCreated(::MA::Flora::FloraSystem*  system)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraTerrainProvider*>(),
                        {"OnSystemWasCreated", {}, {::i2c::type_of<::MA::Flora::FloraSystem*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, system);
}
inline void MA::Flora::FloraTerrainProvider::OnTerrainChanged(::UnityEngine::TerrainChangedFlags  changedFlags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraTerrainProvider*>(),
                        {"OnTerrainChanged", {}, {::i2c::type_of<::UnityEngine::TerrainChangedFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, changedFlags);
}
inline void MA::Flora::FloraTerrainProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraTerrainProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::MA::Flora::FloraTerrainProvider* MA::Flora::FloraTerrainProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::FloraTerrainProvider*>());
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraTerrainProvider::FloraTerrainProvider()   {
}
