#pragma once
// IWYU pragma private; include "GlobalNamespace/SystemVoiceChatWarning.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SystemVoiceChatWarning_def.hpp"
#include "GlobalNamespace/zzzz__LocalizedText_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SystemVoiceChatWarning.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SystemVoiceChatWarning::*)()>(&::GlobalNamespace::SystemVoiceChatWarning::OnEnable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SystemVoiceChatWarning*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SystemVoiceChatWarning._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SystemVoiceChatWarning::*)()>(&::GlobalNamespace::SystemVoiceChatWarning::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SystemVoiceChatWarning*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::LocalizedText>& GlobalNamespace::SystemVoiceChatWarning::__cordl_internal_get_warningText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___warningText;
}
constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& GlobalNamespace::SystemVoiceChatWarning::__cordl_internal_get_warningText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___warningText;
}
constexpr void GlobalNamespace::SystemVoiceChatWarning::__cordl_internal_set_warningText(::UnityW<::GlobalNamespace::LocalizedText>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___warningText = value;
}
constexpr ::StringW& GlobalNamespace::SystemVoiceChatWarning::__cordl_internal_get_ps5LocKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ps5LocKey;
}
constexpr ::StringW const& GlobalNamespace::SystemVoiceChatWarning::__cordl_internal_get_ps5LocKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ps5LocKey;
}
constexpr void GlobalNamespace::SystemVoiceChatWarning::__cordl_internal_set_ps5LocKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ps5LocKey = value;
}
constexpr ::StringW& GlobalNamespace::SystemVoiceChatWarning::__cordl_internal_get_switchLocKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___switchLocKey;
}
constexpr ::StringW const& GlobalNamespace::SystemVoiceChatWarning::__cordl_internal_get_switchLocKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___switchLocKey;
}
constexpr void GlobalNamespace::SystemVoiceChatWarning::__cordl_internal_set_switchLocKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___switchLocKey = value;
}
inline void GlobalNamespace::SystemVoiceChatWarning::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SystemVoiceChatWarning*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SystemVoiceChatWarning::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SystemVoiceChatWarning*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SystemVoiceChatWarning* GlobalNamespace::SystemVoiceChatWarning::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SystemVoiceChatWarning*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SystemVoiceChatWarning::SystemVoiceChatWarning()   {
}
