#pragma once
// IWYU pragma private; include "GlobalNamespace/UIUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__UIUtils_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UIUtils.ResetButtonNavigationExplicitVertical
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Button>>*)>(&::GlobalNamespace::UIUtils::ResetButtonNavigationExplicitVertical)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x18038f1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UIUtils*>(),
                        {"ResetButtonNavigationExplicitVertical", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Button>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UIUtils._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UIUtils::*)()>(&::GlobalNamespace::UIUtils::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UIUtils*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::UIUtils::ResetButtonNavigationExplicitVertical(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Button>>*  buttonList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UIUtils*>(),
                        {"ResetButtonNavigationExplicitVertical", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Button>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buttonList);
}
inline void GlobalNamespace::UIUtils::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UIUtils*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::UIUtils* GlobalNamespace::UIUtils::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UIUtils*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UIUtils::UIUtils()   {
}
