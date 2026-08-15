#pragma once
// IWYU pragma private; include "GlobalNamespace/RewiredExtension.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RewiredExtension_def.hpp"
#include "Rewired/zzzz__Controller_def.hpp"
#include "Rewired/zzzz__Player_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RewiredExtension.SwapButtons
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Rewired::Controller*, ::StringW, ::StringW)>(&::GlobalNamespace::RewiredExtension::SwapButtons)> {
  constexpr static std::size_t size = 0x540;
  constexpr static std::size_t addrs = 0x180389170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RewiredExtension*>(),
                        {"SwapButtons", {}, {::i2c::type_of<::Rewired::Controller*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RewiredExtension.IsCategoryEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Rewired::Player*, int32_t)>(&::GlobalNamespace::RewiredExtension::IsCategoryEnabled)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x180388b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RewiredExtension*>(),
                        {"IsCategoryEnabled", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RewiredExtension.ChangeLayoutNmouse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Rewired::Player*, bool, bool)>(&::GlobalNamespace::RewiredExtension::ChangeLayoutNmouse)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1803889f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RewiredExtension*>(),
                        {"ChangeLayoutNmouse", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RewiredExtension.LogAllMapsAndStates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::GlobalNamespace::RewiredExtension::LogAllMapsAndStates)> {
  constexpr static std::size_t size = 0x510;
  constexpr static std::size_t addrs = 0x180388c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RewiredExtension*>(),
                        {"LogAllMapsAndStates", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::RewiredExtension::setStaticF_LayoutSet(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "LayoutSet", ::GlobalNamespace::RewiredExtension*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::RewiredExtension::getStaticF_LayoutSet()  {
return ::cordl_internals::getStaticField<int32_t, "LayoutSet", ::GlobalNamespace::RewiredExtension*>();
}
inline void GlobalNamespace::RewiredExtension::setStaticF_layoutTags(::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*, "layoutTags", ::GlobalNamespace::RewiredExtension*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::StringW>* GlobalNamespace::RewiredExtension::getStaticF_layoutTags()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*, "layoutTags", ::GlobalNamespace::RewiredExtension*>();
}
inline void GlobalNamespace::RewiredExtension::SwapButtons(::Rewired::Controller*  controller, ::StringW  actionDescriptiveNameA, ::StringW  actionDescriptiveNameB)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RewiredExtension*>(),
                        {"SwapButtons", {}, {::i2c::type_of<::Rewired::Controller*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, controller, actionDescriptiveNameA, actionDescriptiveNameB);
}
inline bool GlobalNamespace::RewiredExtension::IsCategoryEnabled(::Rewired::Player*  player, int32_t  categoryID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RewiredExtension*>(),
                        {"IsCategoryEnabled", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, player, categoryID);
}
inline void GlobalNamespace::RewiredExtension::ChangeLayoutNmouse(::Rewired::Player*  player, bool  side, bool  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RewiredExtension*>(),
                        {"ChangeLayoutNmouse", {}, {::i2c::type_of<::Rewired::Player*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, player, side, state);
}
inline void GlobalNamespace::RewiredExtension::LogAllMapsAndStates(int32_t  playerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RewiredExtension*>(),
                        {"LogAllMapsAndStates", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, playerId);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RewiredExtension::RewiredExtension()   {
}
