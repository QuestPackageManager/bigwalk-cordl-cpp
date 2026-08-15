#pragma once
// IWYU pragma private; include "GlobalNamespace/SalonSwatch.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SalonSwatch_def.hpp"
#include "GlobalNamespace/zzzz__PeckEffectChangeBrushColor_def.hpp"
#include "GlobalNamespace/zzzz__PlayerLookSet_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SalonSwatch.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SalonSwatch::*)()>(&::GlobalNamespace::SalonSwatch::Awake)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180414f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SalonSwatch*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SalonSwatch.Recolor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SalonSwatch::*)()>(&::GlobalNamespace::SalonSwatch::Recolor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180414f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SalonSwatch*>(),
                        {"Recolor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SalonSwatch.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SalonSwatch::*)()>(&::GlobalNamespace::SalonSwatch::OnDestroy)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180415000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SalonSwatch*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SalonSwatch._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SalonSwatch::*)()>(&::GlobalNamespace::SalonSwatch::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SalonSwatch*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PeckEffectChangeBrushColor>& GlobalNamespace::SalonSwatch::__cordl_internal_get_peckEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peckEffect;
}
constexpr ::UnityW<::GlobalNamespace::PeckEffectChangeBrushColor> const& GlobalNamespace::SalonSwatch::__cordl_internal_get_peckEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peckEffect;
}
constexpr void GlobalNamespace::SalonSwatch::__cordl_internal_set_peckEffect(::UnityW<::GlobalNamespace::PeckEffectChangeBrushColor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___peckEffect = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerLookSet>& GlobalNamespace::SalonSwatch::__cordl_internal_get_lookSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookSet;
}
constexpr ::UnityW<::GlobalNamespace::PlayerLookSet> const& GlobalNamespace::SalonSwatch::__cordl_internal_get_lookSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookSet;
}
constexpr void GlobalNamespace::SalonSwatch::__cordl_internal_set_lookSet(::UnityW<::GlobalNamespace::PlayerLookSet>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lookSet = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::SalonSwatch::__cordl_internal_get_targetRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::SalonSwatch::__cordl_internal_get_targetRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRenderer;
}
constexpr void GlobalNamespace::SalonSwatch::__cordl_internal_set_targetRenderer(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetRenderer = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::SalonSwatch::__cordl_internal_get__materialInstance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____materialInstance;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::SalonSwatch::__cordl_internal_get__materialInstance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____materialInstance;
}
constexpr void GlobalNamespace::SalonSwatch::__cordl_internal_set__materialInstance(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____materialInstance = value;
}
inline void GlobalNamespace::SalonSwatch::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SalonSwatch*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SalonSwatch::Recolor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SalonSwatch*>(),
                        {"Recolor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SalonSwatch::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SalonSwatch*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SalonSwatch::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SalonSwatch*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SalonSwatch* GlobalNamespace::SalonSwatch::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SalonSwatch*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SalonSwatch::SalonSwatch()   {
}
