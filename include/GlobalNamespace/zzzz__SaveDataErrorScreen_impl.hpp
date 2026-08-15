#pragma once
// IWYU pragma private; include "GlobalNamespace/SaveDataErrorScreen.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SaveDataErrorScreen_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SaveDataErrorScreen.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaveDataErrorScreen::*)()>(&::GlobalNamespace::SaveDataErrorScreen::Awake)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180389770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveDataErrorScreen*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaveDataErrorScreen.ShowSaveDataError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::SaveDataErrorScreen::ShowSaveDataError)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180389820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveDataErrorScreen*>(),
                        {"ShowSaveDataError", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaveDataErrorScreen.HideSaveDataError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::SaveDataErrorScreen::HideSaveDataError)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803897d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveDataErrorScreen*>(),
                        {"HideSaveDataError", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaveDataErrorScreen.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaveDataErrorScreen::*)()>(&::GlobalNamespace::SaveDataErrorScreen::Update)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180389870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveDataErrorScreen*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaveDataErrorScreen._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaveDataErrorScreen::*)()>(&::GlobalNamespace::SaveDataErrorScreen::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveDataErrorScreen*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SaveDataErrorScreen::__cordl_internal_get_ErrorScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ErrorScreen;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SaveDataErrorScreen::__cordl_internal_get_ErrorScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ErrorScreen;
}
constexpr void GlobalNamespace::SaveDataErrorScreen::__cordl_internal_set_ErrorScreen(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ErrorScreen = value;
}
inline void GlobalNamespace::SaveDataErrorScreen::setStaticF_instance(::UnityW<::GlobalNamespace::SaveDataErrorScreen>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::SaveDataErrorScreen>, "instance", ::GlobalNamespace::SaveDataErrorScreen*>(std::forward<::UnityW<::GlobalNamespace::SaveDataErrorScreen>>(value));
}
inline ::UnityW<::GlobalNamespace::SaveDataErrorScreen> GlobalNamespace::SaveDataErrorScreen::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::SaveDataErrorScreen>, "instance", ::GlobalNamespace::SaveDataErrorScreen*>();
}
inline void GlobalNamespace::SaveDataErrorScreen::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveDataErrorScreen*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SaveDataErrorScreen::ShowSaveDataError()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveDataErrorScreen*>(),
                        {"ShowSaveDataError", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::SaveDataErrorScreen::HideSaveDataError()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveDataErrorScreen*>(),
                        {"HideSaveDataError", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::SaveDataErrorScreen::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveDataErrorScreen*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SaveDataErrorScreen::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveDataErrorScreen*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SaveDataErrorScreen* GlobalNamespace::SaveDataErrorScreen::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SaveDataErrorScreen*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SaveDataErrorScreen::SaveDataErrorScreen()   {
}
