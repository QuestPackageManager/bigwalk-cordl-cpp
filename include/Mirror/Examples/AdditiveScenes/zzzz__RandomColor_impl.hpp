#pragma once
// IWYU pragma private; include "Mirror/Examples/AdditiveScenes/RandomColor.hpp"
#include "Mirror/zzzz__NetworkBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Color32_impl.hpp"
#include "Mirror/Examples/AdditiveScenes/zzzz__RandomColor_def.hpp"
#include "Mirror/zzzz__NetworkReader_def.hpp"
#include "Mirror/zzzz__NetworkWriter_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::Mirror::Examples::AdditiveScenes::RandomColor.OnStartServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::AdditiveScenes::RandomColor::*)()>(&::Mirror::Examples::AdditiveScenes::RandomColor::OnStartServer)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18156b3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::AdditiveScenes::RandomColor*>(),
                    {::i2c::class_of<::Mirror::Examples::AdditiveScenes::RandomColor*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::AdditiveScenes::RandomColor.SetColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::AdditiveScenes::RandomColor::*)(::UnityEngine::Color32, ::UnityEngine::Color32)>(&::Mirror::Examples::AdditiveScenes::RandomColor::SetColor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181562970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveScenes::RandomColor*>(),
                        {"SetColor", {}, {::i2c::type_of<::UnityEngine::Color32>(), ::i2c::type_of<::UnityEngine::Color32>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::AdditiveScenes::RandomColor.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::AdditiveScenes::RandomColor::*)()>(&::Mirror::Examples::AdditiveScenes::RandomColor::OnDestroy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181562790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveScenes::RandomColor*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::AdditiveScenes::RandomColor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::AdditiveScenes::RandomColor::*)()>(&::Mirror::Examples::AdditiveScenes::RandomColor::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181562a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveScenes::RandomColor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::AdditiveScenes::RandomColor.MirrorProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::AdditiveScenes::RandomColor::*)()>(&::Mirror::Examples::AdditiveScenes::RandomColor::MirrorProcessed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveScenes::RandomColor*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::AdditiveScenes::RandomColor.get_Networkcolor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color32 (::Mirror::Examples::AdditiveScenes::RandomColor::*)()>(&::Mirror::Examples::AdditiveScenes::RandomColor::get_Networkcolor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d5ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveScenes::RandomColor*>(),
                        {"get_Networkcolor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::AdditiveScenes::RandomColor.set_Networkcolor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::AdditiveScenes::RandomColor::*)(::ByRefConst<::UnityEngine::Color32>)>(&::Mirror::Examples::AdditiveScenes::RandomColor::set_Networkcolor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18156b4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveScenes::RandomColor*>(),
                        {"set_Networkcolor", {}, {::i2c::type_of<::ByRefConst<::UnityEngine::Color32>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::AdditiveScenes::RandomColor.SerializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::AdditiveScenes::RandomColor::*)(::Mirror::NetworkWriter*, bool)>(&::Mirror::Examples::AdditiveScenes::RandomColor::SerializeSyncVars)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181562920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::AdditiveScenes::RandomColor*>(),
                    {::i2c::class_of<::Mirror::Examples::AdditiveScenes::RandomColor*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::AdditiveScenes::RandomColor.DeserializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::AdditiveScenes::RandomColor::*)(::Mirror::NetworkReader*, bool)>(&::Mirror::Examples::AdditiveScenes::RandomColor::DeserializeSyncVars)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18156b1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::AdditiveScenes::RandomColor*>(),
                    {::i2c::class_of<::Mirror::Examples::AdditiveScenes::RandomColor*>(), 8}
                ));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color32& Mirror::Examples::AdditiveScenes::RandomColor::__cordl_internal_get_color()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___color;
}
constexpr ::UnityEngine::Color32 const& Mirror::Examples::AdditiveScenes::RandomColor::__cordl_internal_get_color() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___color;
}
constexpr void Mirror::Examples::AdditiveScenes::RandomColor::__cordl_internal_set_color(::UnityEngine::Color32  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___color = value;
}
constexpr ::UnityW<::UnityEngine::Material>& Mirror::Examples::AdditiveScenes::RandomColor::__cordl_internal_get_cachedMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& Mirror::Examples::AdditiveScenes::RandomColor::__cordl_internal_get_cachedMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedMaterial;
}
constexpr void Mirror::Examples::AdditiveScenes::RandomColor::__cordl_internal_set_cachedMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cachedMaterial = value;
}
inline void Mirror::Examples::AdditiveScenes::RandomColor::OnStartServer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::AdditiveScenes::RandomColor*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::AdditiveScenes::RandomColor::SetColor(::UnityEngine::Color32  _, ::UnityEngine::Color32  newColor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveScenes::RandomColor*>(),
                        {"SetColor", {}, {::i2c::type_of<::UnityEngine::Color32>(), ::i2c::type_of<::UnityEngine::Color32>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _, newColor);
}
inline void Mirror::Examples::AdditiveScenes::RandomColor::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveScenes::RandomColor*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::AdditiveScenes::RandomColor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveScenes::RandomColor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::AdditiveScenes::RandomColor::MirrorProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveScenes::RandomColor*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Color32 Mirror::Examples::AdditiveScenes::RandomColor::get_Networkcolor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveScenes::RandomColor*>(),
                        {"get_Networkcolor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color32>(this, ___internal_method);
}
inline void Mirror::Examples::AdditiveScenes::RandomColor::set_Networkcolor(::ByRefConst<::UnityEngine::Color32>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveScenes::RandomColor*>(),
                        {"set_Networkcolor", {}, {::i2c::type_of<::ByRefConst<::UnityEngine::Color32>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::Examples::AdditiveScenes::RandomColor::SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::AdditiveScenes::RandomColor*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, forceAll);
}
inline void Mirror::Examples::AdditiveScenes::RandomColor::DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::AdditiveScenes::RandomColor*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, initialState);
}
inline ::Mirror::Examples::AdditiveScenes::RandomColor* Mirror::Examples::AdditiveScenes::RandomColor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Examples::AdditiveScenes::RandomColor*>());
}
// Ctor Parameters []
constexpr ::Mirror::Examples::AdditiveScenes::RandomColor::RandomColor()   {
}
