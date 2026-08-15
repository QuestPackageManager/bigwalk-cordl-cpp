#pragma once
// IWYU pragma private; include "GlobalNamespace/MagicCode.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MagicCode_def.hpp"
#include "TMPro/zzzz__TMP_InputField_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MagicCode.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MagicCode::*)()>(&::GlobalNamespace::MagicCode::Start)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180424300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCode*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MagicCode.CopyCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MagicCode::*)()>(&::GlobalNamespace::MagicCode::CopyCode)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180423fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCode*>(),
                        {"CopyCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MagicCode.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MagicCode::*)()>(&::GlobalNamespace::MagicCode::OnEnable)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1804240d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCode*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MagicCode.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MagicCode::*)()>(&::GlobalNamespace::MagicCode::OnDisable)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180423ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCode*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MagicCode.OnSessionCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MagicCode::*)()>(&::GlobalNamespace::MagicCode::OnSessionCreated)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180424290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCode*>(),
                        {"OnSessionCreated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MagicCode._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MagicCode::*)()>(&::GlobalNamespace::MagicCode::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCode*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_InputField>& GlobalNamespace::MagicCode::__cordl_internal_get_codeField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___codeField;
}
constexpr ::UnityW<::TMPro::TMP_InputField> const& GlobalNamespace::MagicCode::__cordl_internal_get_codeField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___codeField;
}
constexpr void GlobalNamespace::MagicCode::__cordl_internal_set_codeField(::UnityW<::TMPro::TMP_InputField>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___codeField = value;
}
constexpr bool& GlobalNamespace::MagicCode::__cordl_internal_get_useHostCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useHostCode;
}
constexpr bool const& GlobalNamespace::MagicCode::__cordl_internal_get_useHostCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useHostCode;
}
constexpr void GlobalNamespace::MagicCode::__cordl_internal_set_useHostCode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useHostCode = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::MagicCode::__cordl_internal_get_connectingUI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectingUI;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::MagicCode::__cordl_internal_get_connectingUI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectingUI;
}
constexpr void GlobalNamespace::MagicCode::__cordl_internal_set_connectingUI(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___connectingUI = value;
}
inline void GlobalNamespace::MagicCode::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCode*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MagicCode::CopyCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCode*>(),
                        {"CopyCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MagicCode::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCode*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MagicCode::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCode*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MagicCode::OnSessionCreated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCode*>(),
                        {"OnSessionCreated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MagicCode::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCode*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MagicCode* GlobalNamespace::MagicCode::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MagicCode*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MagicCode::MagicCode()   {
}
