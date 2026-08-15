#pragma once
// IWYU pragma private; include "MA/Flora/FloraDebugDisplaySettings.hpp"
#include "UnityEngine/Rendering/zzzz__DebugDisplaySettings_1_impl.hpp"
#include "MA/Flora/zzzz__FloraDebugDisplaySettings_def.hpp"
#include "MA/Flora/zzzz__DebugDisplayFlora_def.hpp"
//  Writing Method size for method: ::MA::Flora::FloraDebugDisplaySettings.get_DisplayData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::DebugDisplayFlora* (::MA::Flora::FloraDebugDisplaySettings::*)()>(&::MA::Flora::FloraDebugDisplaySettings::get_DisplayData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraDebugDisplaySettings*>(),
                        {"get_DisplayData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraDebugDisplaySettings.set_DisplayData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraDebugDisplaySettings::*)(::MA::Flora::DebugDisplayFlora*)>(&::MA::Flora::FloraDebugDisplaySettings::set_DisplayData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraDebugDisplaySettings*>(),
                        {"set_DisplayData", {}, {::i2c::type_of<::MA::Flora::DebugDisplayFlora*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraDebugDisplaySettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraDebugDisplaySettings::*)()>(&::MA::Flora::FloraDebugDisplaySettings::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814c5f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraDebugDisplaySettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraDebugDisplaySettings.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraDebugDisplaySettings::*)()>(&::MA::Flora::FloraDebugDisplaySettings::Reset)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1814c5eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraDebugDisplaySettings*>(),
                    {::i2c::class_of<::MA::Flora::FloraDebugDisplaySettings*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraDebugDisplaySettings.UpdateDisplay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraDebugDisplaySettings::*)()>(&::MA::Flora::FloraDebugDisplaySettings::UpdateDisplay)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraDebugDisplaySettings*>(),
                        {"UpdateDisplay", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::MA::Flora::DebugDisplayFlora*& MA::Flora::FloraDebugDisplaySettings::__cordl_internal_get__DisplayData_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DisplayData_k__BackingField;
}
constexpr ::MA::Flora::DebugDisplayFlora* const& MA::Flora::FloraDebugDisplaySettings::__cordl_internal_get__DisplayData_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DisplayData_k__BackingField;
}
constexpr void MA::Flora::FloraDebugDisplaySettings::__cordl_internal_set__DisplayData_k__BackingField(::MA::Flora::DebugDisplayFlora*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DisplayData_k__BackingField = value;
}
inline ::MA::Flora::DebugDisplayFlora* MA::Flora::FloraDebugDisplaySettings::get_DisplayData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraDebugDisplaySettings*>(),
                        {"get_DisplayData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::DebugDisplayFlora*>(this, ___internal_method);
}
inline void MA::Flora::FloraDebugDisplaySettings::set_DisplayData(::MA::Flora::DebugDisplayFlora*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraDebugDisplaySettings*>(),
                        {"set_DisplayData", {}, {::i2c::type_of<::MA::Flora::DebugDisplayFlora*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void MA::Flora::FloraDebugDisplaySettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraDebugDisplaySettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MA::Flora::FloraDebugDisplaySettings::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::FloraDebugDisplaySettings*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MA::Flora::FloraDebugDisplaySettings::UpdateDisplay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraDebugDisplaySettings*>(),
                        {"UpdateDisplay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::MA::Flora::FloraDebugDisplaySettings* MA::Flora::FloraDebugDisplaySettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::FloraDebugDisplaySettings*>());
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraDebugDisplaySettings::FloraDebugDisplaySettings()   {
}
