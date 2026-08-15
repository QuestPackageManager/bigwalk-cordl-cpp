#pragma once
// IWYU pragma private; include "TheVisualEngine/TVEBlanket.hpp"
#include "Boxophobic/StyledGUI/zzzz__StyledMonoBehaviour_impl.hpp"
#include "TheVisualEngine/zzzz__TVEBlanket_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "TheVisualEngine/zzzz__TVEBalnketBlending_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::TheVisualEngine::TVEBlanket.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVEBlanket::*)()>(&::TheVisualEngine::TVEBlanket::OnEnable)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1804a77d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEBlanket*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEBlanket.GetPrefabRenderers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVEBlanket::*)()>(&::TheVisualEngine::TVEBlanket::GetPrefabRenderers)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1804a7670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEBlanket*>(),
                        {"GetPrefabRenderers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEBlanket.UpdatePrefabBlending
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVEBlanket::*)()>(&::TheVisualEngine::TVEBlanket::UpdatePrefabBlending)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x1804a7980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEBlanket*>(),
                        {"UpdatePrefabBlending", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEBlanket._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVEBlanket::*)()>(&::TheVisualEngine::TVEBlanket::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804a7be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEBlanket*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::TheVisualEngine::TVEBalnketBlending*& TheVisualEngine::TVEBlanket::__cordl_internal_get_blanketBlending()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blanketBlending;
}
constexpr ::TheVisualEngine::TVEBalnketBlending* const& TheVisualEngine::TVEBlanket::__cordl_internal_get_blanketBlending() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blanketBlending;
}
constexpr void TheVisualEngine::TVEBlanket::__cordl_internal_set_blanketBlending(::TheVisualEngine::TVEBalnketBlending*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blanketBlending = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*& TheVisualEngine::TVEBlanket::__cordl_internal_get_prefabRenderers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefabRenderers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* const& TheVisualEngine::TVEBlanket::__cordl_internal_get_prefabRenderers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefabRenderers;
}
constexpr void TheVisualEngine::TVEBlanket::__cordl_internal_set_prefabRenderers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prefabRenderers = value;
}
inline void TheVisualEngine::TVEBlanket::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEBlanket*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TheVisualEngine::TVEBlanket::GetPrefabRenderers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEBlanket*>(),
                        {"GetPrefabRenderers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TheVisualEngine::TVEBlanket::UpdatePrefabBlending()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEBlanket*>(),
                        {"UpdatePrefabBlending", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TheVisualEngine::TVEBlanket::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEBlanket*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::TheVisualEngine::TVEBlanket* TheVisualEngine::TVEBlanket::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TheVisualEngine::TVEBlanket*>());
}
// Ctor Parameters []
constexpr ::TheVisualEngine::TVEBlanket::TVEBlanket()   {
}
