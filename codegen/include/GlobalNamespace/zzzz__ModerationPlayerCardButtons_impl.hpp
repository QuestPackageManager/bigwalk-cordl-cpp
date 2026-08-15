#pragma once
// IWYU pragma private; include "GlobalNamespace/ModerationPlayerCardButtons.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ModerationPlayerCardButtons_def.hpp"
#include "GlobalNamespace/zzzz__LocalizedText_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ModerationPlayerCardButtons._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModerationPlayerCardButtons::*)()>(&::GlobalNamespace::ModerationPlayerCardButtons::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationPlayerCardButtons*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::LocalizedText>& GlobalNamespace::ModerationPlayerCardButtons::__cordl_internal_get_muteText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___muteText;
}
constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& GlobalNamespace::ModerationPlayerCardButtons::__cordl_internal_get_muteText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___muteText;
}
constexpr void GlobalNamespace::ModerationPlayerCardButtons::__cordl_internal_set_muteText(::UnityW<::GlobalNamespace::LocalizedText>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___muteText = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ModerationPlayerCardButtons::__cordl_internal_get_kickButtonToggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___kickButtonToggle;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ModerationPlayerCardButtons::__cordl_internal_get_kickButtonToggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___kickButtonToggle;
}
constexpr void GlobalNamespace::ModerationPlayerCardButtons::__cordl_internal_set_kickButtonToggle(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___kickButtonToggle = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ModerationPlayerCardButtons::__cordl_internal_get_blockedContent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockedContent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ModerationPlayerCardButtons::__cordl_internal_get_blockedContent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockedContent;
}
constexpr void GlobalNamespace::ModerationPlayerCardButtons::__cordl_internal_set_blockedContent(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blockedContent = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ModerationPlayerCardButtons::__cordl_internal_get_unblockedContent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unblockedContent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ModerationPlayerCardButtons::__cordl_internal_get_unblockedContent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unblockedContent;
}
constexpr void GlobalNamespace::ModerationPlayerCardButtons::__cordl_internal_set_unblockedContent(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unblockedContent = value;
}
inline void GlobalNamespace::ModerationPlayerCardButtons::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationPlayerCardButtons*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ModerationPlayerCardButtons* GlobalNamespace::ModerationPlayerCardButtons::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ModerationPlayerCardButtons*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ModerationPlayerCardButtons::ModerationPlayerCardButtons()   {
}
