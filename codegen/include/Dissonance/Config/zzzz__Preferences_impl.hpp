#pragma once
// IWYU pragma private; include "Dissonance/Config/Preferences.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/Config/zzzz__Preferences_def.hpp"
#include "Dissonance/zzzz__Log_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
//  Writing Method size for method: ::Dissonance::Config::Preferences.SetBool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, bool)>(&::Dissonance::Config::Preferences::SetBool)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805e7170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::Preferences*>(),
                        {"SetBool", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Config::Preferences.GetBool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, bool)>(&::Dissonance::Config::Preferences::GetBool)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805e7130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::Preferences*>(),
                        {"GetBool", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
template<typename T>
inline void Dissonance::Config::Preferences::Get(::StringW  key, ::by_ref<T>  output, ::System::Func_3<::StringW,T,T>*  get, ::Dissonance::Log*  log)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Config::Preferences*>(),
                    {"Get", {::i2c::class_of<T>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::System::Func_3<::StringW,T,T>*>(), ::i2c::type_of<::Dissonance::Log*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, key, output, get, log);
}
template<typename T>
inline void Dissonance::Config::Preferences::Set(::StringW  key, ::by_ref<T>  field, T  value, ::System::Action_2<::StringW,T>*  save, ::Dissonance::Log*  log, ::System::Collections::Generic::IEqualityComparer_1<T>*  equality, bool  setAtRuntime)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Config::Preferences*>(),
                    {"Set", {::i2c::class_of<T>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<T>(), ::i2c::type_of<::System::Action_2<::StringW,T>*>(), ::i2c::type_of<::Dissonance::Log*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<T>*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, key, field, value, save, log, equality, setAtRuntime);
}
inline void Dissonance::Config::Preferences::SetBool(::StringW  key, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::Preferences*>(),
                        {"SetBool", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, key, value);
}
inline bool Dissonance::Config::Preferences::GetBool(::StringW  key, bool  defaultValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Config::Preferences*>(),
                        {"GetBool", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, key, defaultValue);
}
// Ctor Parameters []
constexpr ::Dissonance::Config::Preferences::Preferences()   {
}
