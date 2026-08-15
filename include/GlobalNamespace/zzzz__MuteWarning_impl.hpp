#pragma once
// IWYU pragma private; include "GlobalNamespace/MuteWarning.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MuteWarning_def.hpp"
#include "GlobalNamespace/zzzz__LocalizedText_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MuteWarning.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MuteWarning::*)()>(&::GlobalNamespace::MuteWarning::OnEnable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180425a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteWarning*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MuteWarning.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MuteWarning::*)()>(&::GlobalNamespace::MuteWarning::OnDisable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180425a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteWarning*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MuteWarning.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MuteWarning::*)()>(&::GlobalNamespace::MuteWarning::Update)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180425a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteWarning*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MuteWarning.Refresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MuteWarning::*)()>(&::GlobalNamespace::MuteWarning::Refresh)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180425a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteWarning*>(),
                        {"Refresh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MuteWarning._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MuteWarning::*)()>(&::GlobalNamespace::MuteWarning::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteWarning*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::MuteWarning::__cordl_internal_get_warningParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___warningParent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::MuteWarning::__cordl_internal_get_warningParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___warningParent;
}
constexpr void GlobalNamespace::MuteWarning::__cordl_internal_set_warningParent(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___warningParent = value;
}
constexpr ::UnityW<::GlobalNamespace::LocalizedText>& GlobalNamespace::MuteWarning::__cordl_internal_get_localizedText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localizedText;
}
constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& GlobalNamespace::MuteWarning::__cordl_internal_get_localizedText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localizedText;
}
constexpr void GlobalNamespace::MuteWarning::__cordl_internal_set_localizedText(::UnityW<::GlobalNamespace::LocalizedText>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localizedText = value;
}
inline void GlobalNamespace::MuteWarning::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteWarning*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MuteWarning::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteWarning*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MuteWarning::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteWarning*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MuteWarning::Refresh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteWarning*>(),
                        {"Refresh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MuteWarning::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MuteWarning*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MuteWarning* GlobalNamespace::MuteWarning::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MuteWarning*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MuteWarning::MuteWarning()   {
}
