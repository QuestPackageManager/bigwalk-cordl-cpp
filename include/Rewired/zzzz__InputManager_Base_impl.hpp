#pragma once
// IWYU pragma private; include "Rewired/InputManager_Base.hpp"
#include "Rewired/Platforms/zzzz__EditorPlatform_impl.hpp"
#include "Rewired/Platforms/zzzz__Platform_impl.hpp"
#include "Rewired/Platforms/zzzz__ScriptingAPILevel_impl.hpp"
#include "Rewired/Platforms/zzzz__ScriptingBackend_impl.hpp"
#include "Rewired/Platforms/zzzz__WebplayerPlatform_impl.hpp"
#include "Rewired/Utils/zzzz__UnityTools_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Rewired/zzzz__InputManager_Base_def.hpp"
#include "Rewired/Config/zzzz__UpdateLoopSetting_def.hpp"
#include "Rewired/Data/zzzz__ConfigVars_def.hpp"
#include "Rewired/Data/zzzz__ControllerDataFiles_def.hpp"
#include "Rewired/Data/zzzz__UserData_def.hpp"
#include "Rewired/Platforms/zzzz__EditorPlatform_def.hpp"
#include "Rewired/Platforms/zzzz__Platform_def.hpp"
#include "Rewired/Utils/Interfaces/zzzz__IExternalTools_def.hpp"
#include "Rewired/Utils/zzzz__UnityTools_def.hpp"
#include "Rewired/zzzz__InputManager_Base_def.hpp"
#include "Rewired/zzzz__UpdateLoopType_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__TextAsset_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::InputManager_Base_LKDBpcjkHdeGcSOOudAQsdoQJFvk::InputManager_Base_LKDBpcjkHdeGcSOOudAQsdoQJFvk(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::InputManager_Base_LKDBpcjkHdeGcSOOudAQsdoQJFvk::InputManager_Base_LKDBpcjkHdeGcSOOudAQsdoQJFvk()   {
}
constexpr ::Rewired::InputManager_Base_LKDBpcjkHdeGcSOOudAQsdoQJFvk  Rewired::InputManager_Base_LKDBpcjkHdeGcSOOudAQsdoQJFvk::Initialization{static_cast<int32_t>(0x0)};
constexpr ::Rewired::InputManager_Base_LKDBpcjkHdeGcSOOudAQsdoQJFvk  Rewired::InputManager_Base_LKDBpcjkHdeGcSOOudAQsdoQJFvk::Update{static_cast<int32_t>(0x1)};
constexpr ::Rewired::InputManager_Base_LKDBpcjkHdeGcSOOudAQsdoQJFvk  Rewired::InputManager_Base_LKDBpcjkHdeGcSOOudAQsdoQJFvk::Destroy{static_cast<int32_t>(0x2)};
// Ctor Parameters [CppParam { name: "tQZTFrKtpEfsLaIrHyTmHiCZYEXu", ty: "::Rewired::Platforms::Platform", modifiers: "", def_value: Some("{}") }, CppParam { name: "qRWoVmSQINKzQxFAkVhjERezLpiK", ty: "::Rewired::Platforms::EditorPlatform", modifiers: "", def_value: Some("{}") }, CppParam { name: "wMgHpPInWtROVjFUzxoJZXWqAANw", ty: "::Rewired::Platforms::WebplayerPlatform", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::InputManager_Base_bNLQCfEdFBnhyaWgEhnweLQGFlVK::InputManager_Base_bNLQCfEdFBnhyaWgEhnweLQGFlVK(::Rewired::Platforms::Platform  tQZTFrKtpEfsLaIrHyTmHiCZYEXu, ::Rewired::Platforms::EditorPlatform  qRWoVmSQINKzQxFAkVhjERezLpiK, ::Rewired::Platforms::WebplayerPlatform  wMgHpPInWtROVjFUzxoJZXWqAANw) noexcept  {
this->tQZTFrKtpEfsLaIrHyTmHiCZYEXu = tQZTFrKtpEfsLaIrHyTmHiCZYEXu;
this->qRWoVmSQINKzQxFAkVhjERezLpiK = qRWoVmSQINKzQxFAkVhjERezLpiK;
this->wMgHpPInWtROVjFUzxoJZXWqAANw = wMgHpPInWtROVjFUzxoJZXWqAANw;
}
// Ctor Parameters []
constexpr ::Rewired::InputManager_Base_bNLQCfEdFBnhyaWgEhnweLQGFlVK::InputManager_Base_bNLQCfEdFBnhyaWgEhnweLQGFlVK()   {
}
//  Writing Method size for method: ::Rewired::InputManager_Base_pkJdeJjVFYNSRZWZwlvrncCszHrEA._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManager_Base_pkJdeJjVFYNSRZWZwlvrncCszHrEA::*)()>(&::Rewired::InputManager_Base_pkJdeJjVFYNSRZWZwlvrncCszHrEA::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base_pkJdeJjVFYNSRZWZwlvrncCszHrEA*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManager_Base_pkJdeJjVFYNSRZWZwlvrncCszHrEA.tdttgEAQwLgRpjqsYyuygHLpsUKEA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManager_Base_pkJdeJjVFYNSRZWZwlvrncCszHrEA::*)(::Rewired::InputManager_Base_bNLQCfEdFBnhyaWgEhnweLQGFlVK)>(&::Rewired::InputManager_Base_pkJdeJjVFYNSRZWZwlvrncCszHrEA::tdttgEAQwLgRpjqsYyuygHLpsUKEA)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18196e100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base_pkJdeJjVFYNSRZWZwlvrncCszHrEA*>(),
                        {"tdttgEAQwLgRpjqsYyuygHLpsUKEA", {}, {::i2c::type_of<::Rewired::InputManager_Base_bNLQCfEdFBnhyaWgEhnweLQGFlVK>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManager_Base_pkJdeJjVFYNSRZWZwlvrncCszHrEA.SbrIDCVfjCSNuMZywNcSDKQEqTkX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::UnityTools_LpYYlrQWsVFMrljjfmaCuXMaWQj (::Rewired::InputManager_Base_pkJdeJjVFYNSRZWZwlvrncCszHrEA::*)()>(&::Rewired::InputManager_Base_pkJdeJjVFYNSRZWZwlvrncCszHrEA::SbrIDCVfjCSNuMZywNcSDKQEqTkX)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804e6790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base_pkJdeJjVFYNSRZWZwlvrncCszHrEA*>(),
                        {"SbrIDCVfjCSNuMZywNcSDKQEqTkX", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Rewired::InputManager_Base>& Rewired::InputManager_Base_pkJdeJjVFYNSRZWZwlvrncCszHrEA::__cordl_internal_get_hvKmfmPYkfUwOskJnXDtYFgqksFP()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hvKmfmPYkfUwOskJnXDtYFgqksFP;
}
constexpr ::UnityW<::Rewired::InputManager_Base> const& Rewired::InputManager_Base_pkJdeJjVFYNSRZWZwlvrncCszHrEA::__cordl_internal_get_hvKmfmPYkfUwOskJnXDtYFgqksFP() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hvKmfmPYkfUwOskJnXDtYFgqksFP;
}
constexpr void Rewired::InputManager_Base_pkJdeJjVFYNSRZWZwlvrncCszHrEA::__cordl_internal_set_hvKmfmPYkfUwOskJnXDtYFgqksFP(::UnityW<::Rewired::InputManager_Base>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hvKmfmPYkfUwOskJnXDtYFgqksFP = value;
}
constexpr ::Rewired::Utils::UnityTools_LpYYlrQWsVFMrljjfmaCuXMaWQj& Rewired::InputManager_Base_pkJdeJjVFYNSRZWZwlvrncCszHrEA::__cordl_internal_get_QRzbyugyjJVRQccKVmajjjbQhjIjA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QRzbyugyjJVRQccKVmajjjbQhjIjA;
}
constexpr ::Rewired::Utils::UnityTools_LpYYlrQWsVFMrljjfmaCuXMaWQj const& Rewired::InputManager_Base_pkJdeJjVFYNSRZWZwlvrncCszHrEA::__cordl_internal_get_QRzbyugyjJVRQccKVmajjjbQhjIjA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QRzbyugyjJVRQccKVmajjjbQhjIjA;
}
constexpr void Rewired::InputManager_Base_pkJdeJjVFYNSRZWZwlvrncCszHrEA::__cordl_internal_set_QRzbyugyjJVRQccKVmajjjbQhjIjA(::Rewired::Utils::UnityTools_LpYYlrQWsVFMrljjfmaCuXMaWQj  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___QRzbyugyjJVRQccKVmajjjbQhjIjA = value;
}
constexpr ::StringW& Rewired::InputManager_Base_pkJdeJjVFYNSRZWZwlvrncCszHrEA::__cordl_internal_get_atFViIsrUeBWrJJhasrmezOvjjok()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___atFViIsrUeBWrJJhasrmezOvjjok;
}
constexpr ::StringW const& Rewired::InputManager_Base_pkJdeJjVFYNSRZWZwlvrncCszHrEA::__cordl_internal_get_atFViIsrUeBWrJJhasrmezOvjjok() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___atFViIsrUeBWrJJhasrmezOvjjok;
}
constexpr void Rewired::InputManager_Base_pkJdeJjVFYNSRZWZwlvrncCszHrEA::__cordl_internal_set_atFViIsrUeBWrJJhasrmezOvjjok(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___atFViIsrUeBWrJJhasrmezOvjjok = value;
}
inline void Rewired::InputManager_Base_pkJdeJjVFYNSRZWZwlvrncCszHrEA::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base_pkJdeJjVFYNSRZWZwlvrncCszHrEA*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::InputManager_Base_pkJdeJjVFYNSRZWZwlvrncCszHrEA::tdttgEAQwLgRpjqsYyuygHLpsUKEA(::Rewired::InputManager_Base_bNLQCfEdFBnhyaWgEhnweLQGFlVK  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base_pkJdeJjVFYNSRZWZwlvrncCszHrEA*>(),
                        {"tdttgEAQwLgRpjqsYyuygHLpsUKEA", {}, {::i2c::type_of<::Rewired::InputManager_Base_bNLQCfEdFBnhyaWgEhnweLQGFlVK>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::Utils::UnityTools_LpYYlrQWsVFMrljjfmaCuXMaWQj Rewired::InputManager_Base_pkJdeJjVFYNSRZWZwlvrncCszHrEA::SbrIDCVfjCSNuMZywNcSDKQEqTkX()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base_pkJdeJjVFYNSRZWZwlvrncCszHrEA*>(),
                        {"SbrIDCVfjCSNuMZywNcSDKQEqTkX", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::UnityTools_LpYYlrQWsVFMrljjfmaCuXMaWQj>(this, ___internal_method);
}
inline ::Rewired::InputManager_Base_pkJdeJjVFYNSRZWZwlvrncCszHrEA* Rewired::InputManager_Base_pkJdeJjVFYNSRZWZwlvrncCszHrEA::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::InputManager_Base_pkJdeJjVFYNSRZWZwlvrncCszHrEA*>());
}
// Ctor Parameters []
constexpr ::Rewired::InputManager_Base_pkJdeJjVFYNSRZWZwlvrncCszHrEA::InputManager_Base_pkJdeJjVFYNSRZWZwlvrncCszHrEA()   {
}
//  Writing Method size for method: ::Rewired::InputManager_Base.get_userData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Data::UserData* (::Rewired::InputManager_Base::*)()>(&::Rewired::InputManager_Base::get_userData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"get_userData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManager_Base.set_userData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManager_Base::*)(::Rewired::Data::UserData*)>(&::Rewired::InputManager_Base::set_userData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"set_userData", {}, {::i2c::type_of<::Rewired::Data::UserData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManager_Base.get_dataFiles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Rewired::Data::ControllerDataFiles> (::Rewired::InputManager_Base::*)()>(&::Rewired::InputManager_Base::get_dataFiles)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"get_dataFiles", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManager_Base.set_dataFiles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManager_Base::*)(::Rewired::Data::ControllerDataFiles*)>(&::Rewired::InputManager_Base::set_dataFiles)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181960e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"set_dataFiles", {}, {::i2c::type_of<::Rewired::Data::ControllerDataFiles*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManager_Base.get_runInEditMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputManager_Base::*)()>(&::Rewired::InputManager_Base::get_runInEditMode)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181960af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"get_runInEditMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManager_Base.set_runInEditMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManager_Base::*)(bool)>(&::Rewired::InputManager_Base::set_runInEditMode)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181960f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"set_runInEditMode", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManager_Base.get_isRunningInEditMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputManager_Base::*)()>(&::Rewired::InputManager_Base::get_isRunningInEditMode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181960a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"get_isRunningInEditMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManager_Base.DontDestroyOnLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManager_Base::*)()>(&::Rewired::InputManager_Base::DontDestroyOnLoad)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18195f460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"DontDestroyOnLoad", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManager_Base.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManager_Base::*)()>(&::Rewired::InputManager_Base::Awake)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18195f2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManager_Base.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManager_Base::*)()>(&::Rewired::InputManager_Base::OnEnable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18195fa40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManager_Base.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManager_Base::*)()>(&::Rewired::InputManager_Base::OnDisable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18195f9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManager_Base.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManager_Base::*)()>(&::Rewired::InputManager_Base::OnDestroy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18195f9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManager_Base.zAKgyaFTCelqXUJQDIZahYgFyrte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManager_Base::*)(bool)>(&::Rewired::InputManager_Base::zAKgyaFTCelqXUJQDIZahYgFyrte)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1819611b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"zAKgyaFTCelqXUJQDIZahYgFyrte", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManager_Base.OnApplicationFocus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManager_Base::*)(bool)>(&::Rewired::InputManager_Base::OnApplicationFocus)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18195f960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"OnApplicationFocus", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManager_Base.OnApplicationPause
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManager_Base::*)(bool)>(&::Rewired::InputManager_Base::OnApplicationPause)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18195f9a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"OnApplicationPause", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManager_Base.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManager_Base::*)()>(&::Rewired::InputManager_Base::Start)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18195fc50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManager_Base.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManager_Base::*)()>(&::Rewired::InputManager_Base::Update)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181960070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManager_Base.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManager_Base::*)()>(&::Rewired::InputManager_Base::FixedUpdate)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18195f4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManager_Base.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManager_Base::*)()>(&::Rewired::InputManager_Base::LateUpdate)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18195f820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManager_Base.OnGUIUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManager_Base::*)()>(&::Rewired::InputManager_Base::OnGUIUpdate)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18195fad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"OnGUIUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManager_Base.DoUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManager_Base::*)(::Rewired::UpdateLoopType, ::Rewired::Config::UpdateLoopSetting)>(&::Rewired::InputManager_Base::DoUpdate)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18195f310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"DoUpdate", {}, {::i2c::type_of<::Rewired::UpdateLoopType>(), ::i2c::type_of<::Rewired::Config::UpdateLoopSetting>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManager_Base.TryStartRunInEditMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManager_Base::*)()>(&::Rewired::InputManager_Base::TryStartRunInEditMode)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x18195fcb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"TryStartRunInEditMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManager_Base.TryStopRunInEditMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManager_Base::*)()>(&::Rewired::InputManager_Base::TryStopRunInEditMode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18195fff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"TryStopRunInEditMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManager_Base.tRjNTRojUzcwliMbpWCbfObBNsLKA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputManager_Base::*)()>(&::Rewired::InputManager_Base::tRjNTRojUzcwliMbpWCbfObBNsLKA)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181961040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"tRjNTRojUzcwliMbpWCbfObBNsLKA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManager_Base.WwPPqWwIBzvIlccDkseItKfZJUbW
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManager_Base::*)()>(&::Rewired::InputManager_Base::WwPPqWwIBzvIlccDkseItKfZJUbW)> {
  constexpr static std::size_t size = 0x650;
  constexpr static std::size_t addrs = 0x1819600e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"WwPPqWwIBzvIlccDkseItKfZJUbW", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManager_Base.IRFbyUCEOgXyDJXDymDWnplbTRuNA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManager_Base::*)(::Rewired::Platforms::Platform)>(&::Rewired::InputManager_Base::IRFbyUCEOgXyDJXDymDWnplbTRuNA)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180511530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"IRFbyUCEOgXyDJXDymDWnplbTRuNA", {}, {::i2c::type_of<::Rewired::Platforms::Platform>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManager_Base.tdHYZJkNBWlVfUgihFvLdeydHzPV
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::InputManager_Base::*)(::Rewired::Data::ConfigVars*)>(&::Rewired::InputManager_Base::tdHYZJkNBWlVfUgihFvLdeydHzPV)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181961090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"tdHYZJkNBWlVfUgihFvLdeydHzPV", {}, {::i2c::type_of<::Rewired::Data::ConfigVars*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManager_Base.dJfYNxmAjBbSgyBWymeOPkLyxbEK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::Reflection::Assembly*>* (::Rewired::InputManager_Base::*)()>(&::Rewired::InputManager_Base::dJfYNxmAjBbSgyBWymeOPkLyxbEK)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x181960890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"dJfYNxmAjBbSgyBWymeOPkLyxbEK", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManager_Base.oQcYCZfPwdFxrNJmyyNhxlnzjjRhA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::Reflection::Assembly*>* (::Rewired::InputManager_Base::*)()>(&::Rewired::InputManager_Base::oQcYCZfPwdFxrNJmyyNhxlnzjjRhA)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x181960ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"oQcYCZfPwdFxrNJmyyNhxlnzjjRhA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManager_Base.aSTMBOCOWEBHcKnJqlHzDFDQQOMAb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Rewired::InputManager_Base::*)()>(&::Rewired::InputManager_Base::aSTMBOCOWEBHcKnJqlHzDFDQQOMAb)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181960790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"aSTMBOCOWEBHcKnJqlHzDFDQQOMAb", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManager_Base.LTqIJVUazuDyfhaOlNHlxPjwZyFP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManager_Base::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextAsset>>*, ::System::Collections::Generic::List_1<::StringW>*)>(&::Rewired::InputManager_Base::LTqIJVUazuDyfhaOlNHlxPjwZyFP)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18195f700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"LTqIJVUazuDyfhaOlNHlxPjwZyFP", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextAsset>>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManager_Base.NieYkMXPIoqwumNrdnIuswMkCEEj
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::InputManager_Base::*)()>(&::Rewired::InputManager_Base::NieYkMXPIoqwumNrdnIuswMkCEEj)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18195f8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"NieYkMXPIoqwumNrdnIuswMkCEEj", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManager_Base.tOHauqCUkDLfzpYixoidQBZRjYEgb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputManager_Base::*)()>(&::Rewired::InputManager_Base::tOHauqCUkDLfzpYixoidQBZRjYEgb)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181961010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"tOHauqCUkDLfzpYixoidQBZRjYEgb", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManager_Base.iKjFDKcJYaIJGHyZizoEQMSeeIgy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::InputManager_Base::*)()>(&::Rewired::InputManager_Base::iKjFDKcJYaIJGHyZizoEQMSeeIgy)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181960b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"iKjFDKcJYaIJGHyZizoEQMSeeIgy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManager_Base.yKyxtYwSxXojrPtOUDhWCerdobwh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputManager_Base::*)()>(&::Rewired::InputManager_Base::yKyxtYwSxXojrPtOUDhWCerdobwh)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1819610f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"yKyxtYwSxXojrPtOUDhWCerdobwh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManager_Base.RecompileStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManager_Base::*)()>(&::Rewired::InputManager_Base::RecompileStart)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18195fbd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"RecompileStart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManager_Base.RecompileEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManager_Base::*)()>(&::Rewired::InputManager_Base::RecompileEnd)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18195fba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"RecompileEnd", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManager_Base.OnSceneLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManager_Base::*)()>(&::Rewired::InputManager_Base::OnSceneLoaded)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18195fb40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"OnSceneLoaded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManager_Base.lHDDHwtsMwlrjsjPcfRSMPljOuHm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManager_Base::*)(::Rewired::InputManager_Base_LKDBpcjkHdeGcSOOudAQsdoQJFvk, ::StringW, ::System::Exception*)>(&::Rewired::InputManager_Base::lHDDHwtsMwlrjsjPcfRSMPljOuHm)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181960be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"lHDDHwtsMwlrjsjPcfRSMPljOuHm", {}, {::i2c::type_of<::Rewired::InputManager_Base_LKDBpcjkHdeGcSOOudAQsdoQJFvk>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManager_Base.ResetAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManager_Base::*)()>(&::Rewired::InputManager_Base::ResetAll)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18195fc00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"ResetAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManager_Base.GetEditorPlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Platforms::EditorPlatform (::Rewired::InputManager_Base::*)()>(&::Rewired::InputManager_Base::GetEditorPlatform)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18195f530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"GetEditorPlatform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManager_Base.GetSupportedEditModeControllerTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManager_Base::*)(::by_ref<bool>, ::by_ref<bool>, ::by_ref<bool>)>(&::Rewired::InputManager_Base::GetSupportedEditModeControllerTypes)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18195f580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"GetSupportedEditModeControllerTypes", {}, {::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManager_Base.IsEditModeSupported
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputManager_Base::*)()>(&::Rewired::InputManager_Base::IsEditModeSupported)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18195f630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"IsEditModeSupported", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManager_Base.OnInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManager_Base::*)()>(&::Rewired::InputManager_Base::OnInitialized)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::InputManager_Base*>(),
                    {::i2c::class_of<::Rewired::InputManager_Base*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManager_Base.OnDeinitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManager_Base::*)()>(&::Rewired::InputManager_Base::OnDeinitialized)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::InputManager_Base*>(),
                    {::i2c::class_of<::Rewired::InputManager_Base*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManager_Base.DetectPlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManager_Base::*)()>(&::Rewired::InputManager_Base::DetectPlatform)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::InputManager_Base*>(),
                    {::i2c::class_of<::Rewired::InputManager_Base*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManager_Base.CheckRecompile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManager_Base::*)()>(&::Rewired::InputManager_Base::CheckRecompile)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::InputManager_Base*>(),
                    {::i2c::class_of<::Rewired::InputManager_Base*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManager_Base.GetExternalTools
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Interfaces::IExternalTools* (::Rewired::InputManager_Base::*)()>(&::Rewired::InputManager_Base::GetExternalTools)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::InputManager_Base*>(),
                    {::i2c::class_of<::Rewired::InputManager_Base*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManager_Base._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManager_Base::*)()>(&::Rewired::InputManager_Base::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181960730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManager_Base.zYJfbfiWjiUZopPTZfAjxkkdiFMR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputManager_Base::*)(::System::Reflection::Assembly*)>(&::Rewired::InputManager_Base::zYJfbfiWjiUZopPTZfAjxkkdiFMR)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181961280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"zYJfbfiWjiUZopPTZfAjxkkdiFMR", {}, {::i2c::type_of<::System::Reflection::Assembly*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Rewired::InputManager_Base::__cordl_internal_get__dontDestroyOnLoad()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dontDestroyOnLoad;
}
constexpr bool const& Rewired::InputManager_Base::__cordl_internal_get__dontDestroyOnLoad() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dontDestroyOnLoad;
}
constexpr void Rewired::InputManager_Base::__cordl_internal_set__dontDestroyOnLoad(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dontDestroyOnLoad = value;
}
constexpr ::Rewired::Data::UserData*& Rewired::InputManager_Base::__cordl_internal_get__userData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____userData;
}
constexpr ::Rewired::Data::UserData* const& Rewired::InputManager_Base::__cordl_internal_get__userData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____userData;
}
constexpr void Rewired::InputManager_Base::__cordl_internal_set__userData(::Rewired::Data::UserData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____userData = value;
}
constexpr ::UnityW<::Rewired::Data::ControllerDataFiles>& Rewired::InputManager_Base::__cordl_internal_get__controllerDataFiles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controllerDataFiles;
}
constexpr ::UnityW<::Rewired::Data::ControllerDataFiles> const& Rewired::InputManager_Base::__cordl_internal_get__controllerDataFiles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controllerDataFiles;
}
constexpr void Rewired::InputManager_Base::__cordl_internal_set__controllerDataFiles(::UnityW<::Rewired::Data::ControllerDataFiles>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____controllerDataFiles = value;
}
constexpr bool& Rewired::InputManager_Base::__cordl_internal_get_isCompiling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isCompiling;
}
constexpr bool const& Rewired::InputManager_Base::__cordl_internal_get_isCompiling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isCompiling;
}
constexpr void Rewired::InputManager_Base::__cordl_internal_set_isCompiling(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isCompiling = value;
}
constexpr bool& Rewired::InputManager_Base::__cordl_internal_get_ztQftwyUUjLrbRIRQWPwpZMOYdpI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ztQftwyUUjLrbRIRQWPwpZMOYdpI;
}
constexpr bool const& Rewired::InputManager_Base::__cordl_internal_get_ztQftwyUUjLrbRIRQWPwpZMOYdpI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ztQftwyUUjLrbRIRQWPwpZMOYdpI;
}
constexpr void Rewired::InputManager_Base::__cordl_internal_set_ztQftwyUUjLrbRIRQWPwpZMOYdpI(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ztQftwyUUjLrbRIRQWPwpZMOYdpI = value;
}
constexpr bool& Rewired::InputManager_Base::__cordl_internal_get_JEXkNwlDQBkZWSQhjuVDAQjAxZwA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JEXkNwlDQBkZWSQhjuVDAQjAxZwA;
}
constexpr bool const& Rewired::InputManager_Base::__cordl_internal_get_JEXkNwlDQBkZWSQhjuVDAQjAxZwA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JEXkNwlDQBkZWSQhjuVDAQjAxZwA;
}
constexpr void Rewired::InputManager_Base::__cordl_internal_set_JEXkNwlDQBkZWSQhjuVDAQjAxZwA(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___JEXkNwlDQBkZWSQhjuVDAQjAxZwA = value;
}
constexpr ::Rewired::Platforms::EditorPlatform& Rewired::InputManager_Base::__cordl_internal_get_editorPlatform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___editorPlatform;
}
constexpr ::Rewired::Platforms::EditorPlatform const& Rewired::InputManager_Base::__cordl_internal_get_editorPlatform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___editorPlatform;
}
constexpr void Rewired::InputManager_Base::__cordl_internal_set_editorPlatform(::Rewired::Platforms::EditorPlatform  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___editorPlatform = value;
}
constexpr ::Rewired::Platforms::Platform& Rewired::InputManager_Base::__cordl_internal_get_platform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platform;
}
constexpr ::Rewired::Platforms::Platform const& Rewired::InputManager_Base::__cordl_internal_get_platform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platform;
}
constexpr void Rewired::InputManager_Base::__cordl_internal_set_platform(::Rewired::Platforms::Platform  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___platform = value;
}
constexpr ::Rewired::Platforms::WebplayerPlatform& Rewired::InputManager_Base::__cordl_internal_get_webplayerPlatform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___webplayerPlatform;
}
constexpr ::Rewired::Platforms::WebplayerPlatform const& Rewired::InputManager_Base::__cordl_internal_get_webplayerPlatform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___webplayerPlatform;
}
constexpr void Rewired::InputManager_Base::__cordl_internal_set_webplayerPlatform(::Rewired::Platforms::WebplayerPlatform  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___webplayerPlatform = value;
}
constexpr bool& Rewired::InputManager_Base::__cordl_internal_get_isEditor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isEditor;
}
constexpr bool const& Rewired::InputManager_Base::__cordl_internal_get_isEditor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isEditor;
}
constexpr void Rewired::InputManager_Base::__cordl_internal_set_isEditor(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isEditor = value;
}
constexpr bool& Rewired::InputManager_Base::__cordl_internal_get__detectedPlatformInEditor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____detectedPlatformInEditor;
}
constexpr bool const& Rewired::InputManager_Base::__cordl_internal_get__detectedPlatformInEditor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____detectedPlatformInEditor;
}
constexpr void Rewired::InputManager_Base::__cordl_internal_set__detectedPlatformInEditor(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____detectedPlatformInEditor = value;
}
constexpr ::Rewired::Platforms::ScriptingBackend& Rewired::InputManager_Base::__cordl_internal_get_scriptingBackend()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scriptingBackend;
}
constexpr ::Rewired::Platforms::ScriptingBackend const& Rewired::InputManager_Base::__cordl_internal_get_scriptingBackend() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scriptingBackend;
}
constexpr void Rewired::InputManager_Base::__cordl_internal_set_scriptingBackend(::Rewired::Platforms::ScriptingBackend  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scriptingBackend = value;
}
constexpr ::Rewired::Platforms::ScriptingAPILevel& Rewired::InputManager_Base::__cordl_internal_get_scriptingAPILevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scriptingAPILevel;
}
constexpr ::Rewired::Platforms::ScriptingAPILevel const& Rewired::InputManager_Base::__cordl_internal_get_scriptingAPILevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scriptingAPILevel;
}
constexpr void Rewired::InputManager_Base::__cordl_internal_set_scriptingAPILevel(::Rewired::Platforms::ScriptingAPILevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scriptingAPILevel = value;
}
constexpr bool& Rewired::InputManager_Base::__cordl_internal_get_TSngeUkRfxRCDKonlipVlAVyIGjSA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TSngeUkRfxRCDKonlipVlAVyIGjSA;
}
constexpr bool const& Rewired::InputManager_Base::__cordl_internal_get_TSngeUkRfxRCDKonlipVlAVyIGjSA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TSngeUkRfxRCDKonlipVlAVyIGjSA;
}
constexpr void Rewired::InputManager_Base::__cordl_internal_set_TSngeUkRfxRCDKonlipVlAVyIGjSA(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TSngeUkRfxRCDKonlipVlAVyIGjSA = value;
}
constexpr bool& Rewired::InputManager_Base::__cordl_internal_get_ibRDxZjJNRfvTjLlFapqOIdyLbWg()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ibRDxZjJNRfvTjLlFapqOIdyLbWg;
}
constexpr bool const& Rewired::InputManager_Base::__cordl_internal_get_ibRDxZjJNRfvTjLlFapqOIdyLbWg() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ibRDxZjJNRfvTjLlFapqOIdyLbWg;
}
constexpr void Rewired::InputManager_Base::__cordl_internal_set_ibRDxZjJNRfvTjLlFapqOIdyLbWg(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ibRDxZjJNRfvTjLlFapqOIdyLbWg = value;
}
inline ::Rewired::Data::UserData* Rewired::InputManager_Base::get_userData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"get_userData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Data::UserData*>(this, ___internal_method);
}
inline void Rewired::InputManager_Base::set_userData(::Rewired::Data::UserData*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"set_userData", {}, {::i2c::type_of<::Rewired::Data::UserData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::Rewired::Data::ControllerDataFiles> Rewired::InputManager_Base::get_dataFiles()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"get_dataFiles", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Rewired::Data::ControllerDataFiles>>(this, ___internal_method);
}
inline void Rewired::InputManager_Base::set_dataFiles(::Rewired::Data::ControllerDataFiles*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"set_dataFiles", {}, {::i2c::type_of<::Rewired::Data::ControllerDataFiles*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::InputManager_Base::get_runInEditMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"get_runInEditMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::InputManager_Base::set_runInEditMode(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"set_runInEditMode", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::InputManager_Base::get_isRunningInEditMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"get_isRunningInEditMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::InputManager_Base::DontDestroyOnLoad()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"DontDestroyOnLoad", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::InputManager_Base::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::InputManager_Base::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::InputManager_Base::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::InputManager_Base::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::InputManager_Base::zAKgyaFTCelqXUJQDIZahYgFyrte(bool  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"zAKgyaFTCelqXUJQDIZahYgFyrte", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::InputManager_Base::OnApplicationFocus(bool  isFocused)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"OnApplicationFocus", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isFocused);
}
inline void Rewired::InputManager_Base::OnApplicationPause(bool  isPaused)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"OnApplicationPause", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isPaused);
}
inline void Rewired::InputManager_Base::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::InputManager_Base::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::InputManager_Base::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::InputManager_Base::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::InputManager_Base::OnGUIUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"OnGUIUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::InputManager_Base::DoUpdate(::Rewired::UpdateLoopType  updateLoopType, ::Rewired::Config::UpdateLoopSetting  updateLoopSettingBit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"DoUpdate", {}, {::i2c::type_of<::Rewired::UpdateLoopType>(), ::i2c::type_of<::Rewired::Config::UpdateLoopSetting>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateLoopType, updateLoopSettingBit);
}
inline void Rewired::InputManager_Base::TryStartRunInEditMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"TryStartRunInEditMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::InputManager_Base::TryStopRunInEditMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"TryStopRunInEditMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::InputManager_Base::tRjNTRojUzcwliMbpWCbfObBNsLKA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"tRjNTRojUzcwliMbpWCbfObBNsLKA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::InputManager_Base::WwPPqWwIBzvIlccDkseItKfZJUbW()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"WwPPqWwIBzvIlccDkseItKfZJUbW", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::InputManager_Base::IRFbyUCEOgXyDJXDymDWnplbTRuNA(::Rewired::Platforms::Platform  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"IRFbyUCEOgXyDJXDymDWnplbTRuNA", {}, {::i2c::type_of<::Rewired::Platforms::Platform>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::Object* Rewired::InputManager_Base::tdHYZJkNBWlVfUgihFvLdeydHzPV(::Rewired::Data::ConfigVars*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"tdHYZJkNBWlVfUgihFvLdeydHzPV", {}, {::i2c::type_of<::Rewired::Data::ConfigVars*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::Collections::Generic::List_1<::System::Reflection::Assembly*>* Rewired::InputManager_Base::dJfYNxmAjBbSgyBWymeOPkLyxbEK()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"dJfYNxmAjBbSgyBWymeOPkLyxbEK", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Reflection::Assembly*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::System::Reflection::Assembly*>* Rewired::InputManager_Base::oQcYCZfPwdFxrNJmyyNhxlnzjjRhA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"oQcYCZfPwdFxrNJmyyNhxlnzjjRhA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Reflection::Assembly*>*>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Rewired::InputManager_Base::aSTMBOCOWEBHcKnJqlHzDFDQQOMAb()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"aSTMBOCOWEBHcKnJqlHzDFDQQOMAb", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Rewired::InputManager_Base::LTqIJVUazuDyfhaOlNHlxPjwZyFP(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextAsset>>*  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::List_1<::StringW>*  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"LTqIJVUazuDyfhaOlNHlxPjwZyFP", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextAsset>>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline ::StringW Rewired::InputManager_Base::NieYkMXPIoqwumNrdnIuswMkCEEj()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"NieYkMXPIoqwumNrdnIuswMkCEEj", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Rewired::InputManager_Base::tOHauqCUkDLfzpYixoidQBZRjYEgb()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"tOHauqCUkDLfzpYixoidQBZRjYEgb", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW Rewired::InputManager_Base::iKjFDKcJYaIJGHyZizoEQMSeeIgy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"iKjFDKcJYaIJGHyZizoEQMSeeIgy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Rewired::InputManager_Base::yKyxtYwSxXojrPtOUDhWCerdobwh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"yKyxtYwSxXojrPtOUDhWCerdobwh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::InputManager_Base::RecompileStart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"RecompileStart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::InputManager_Base::RecompileEnd()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"RecompileEnd", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::InputManager_Base::OnSceneLoaded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"OnSceneLoaded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::InputManager_Base::lHDDHwtsMwlrjsjPcfRSMPljOuHm(::Rewired::InputManager_Base_LKDBpcjkHdeGcSOOudAQsdoQJFvk  _cordl_fixed_empty_name_whitespace, ::StringW  _cordl_fixed_empty_name_whitespace_param_1, ::System::Exception*  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"lHDDHwtsMwlrjsjPcfRSMPljOuHm", {}, {::i2c::type_of<::Rewired::InputManager_Base_LKDBpcjkHdeGcSOOudAQsdoQJFvk>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline void Rewired::InputManager_Base::ResetAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"ResetAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Platforms::EditorPlatform Rewired::InputManager_Base::GetEditorPlatform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"GetEditorPlatform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Platforms::EditorPlatform>(this, ___internal_method);
}
inline void Rewired::InputManager_Base::GetSupportedEditModeControllerTypes(::by_ref<bool>  keyboardSupported, ::by_ref<bool>  mouseSupported, ::by_ref<bool>  joystickSupported)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"GetSupportedEditModeControllerTypes", {}, {::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyboardSupported, mouseSupported, joystickSupported);
}
inline bool Rewired::InputManager_Base::IsEditModeSupported()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"IsEditModeSupported", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::InputManager_Base::OnInitialized()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::InputManager_Base*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::InputManager_Base::OnDeinitialized()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::InputManager_Base*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::InputManager_Base::DetectPlatform()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::InputManager_Base*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::InputManager_Base::CheckRecompile()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::InputManager_Base*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Utils::Interfaces::IExternalTools* Rewired::InputManager_Base::GetExternalTools()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::InputManager_Base*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Interfaces::IExternalTools*>(this, ___internal_method);
}
inline void Rewired::InputManager_Base::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::InputManager_Base::zYJfbfiWjiUZopPTZfAjxkkdiFMR(::System::Reflection::Assembly*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManager_Base*>(),
                        {"zYJfbfiWjiUZopPTZfAjxkkdiFMR", {}, {::i2c::type_of<::System::Reflection::Assembly*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::InputManager_Base* Rewired::InputManager_Base::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::InputManager_Base*>());
}
// Ctor Parameters []
constexpr ::Rewired::InputManager_Base::InputManager_Base()   {
}
