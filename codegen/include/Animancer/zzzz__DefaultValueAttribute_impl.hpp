#pragma once
// IWYU pragma private; include "Animancer/DefaultValueAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Animancer/zzzz__DefaultValueAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Animancer::DefaultValueAttribute.get_Primary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Animancer::DefaultValueAttribute::*)()>(&::Animancer::DefaultValueAttribute::get_Primary)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::DefaultValueAttribute*>(),
                    {::i2c::class_of<::Animancer::DefaultValueAttribute*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DefaultValueAttribute.set_Primary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::DefaultValueAttribute::*)(::System::Object*)>(&::Animancer::DefaultValueAttribute::set_Primary)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::DefaultValueAttribute*>(),
                    {::i2c::class_of<::Animancer::DefaultValueAttribute*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DefaultValueAttribute.get_Secondary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Animancer::DefaultValueAttribute::*)()>(&::Animancer::DefaultValueAttribute::get_Secondary)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::DefaultValueAttribute*>(),
                    {::i2c::class_of<::Animancer::DefaultValueAttribute*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DefaultValueAttribute.set_Secondary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::DefaultValueAttribute::*)(::System::Object*)>(&::Animancer::DefaultValueAttribute::set_Secondary)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::DefaultValueAttribute*>(),
                    {::i2c::class_of<::Animancer::DefaultValueAttribute*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DefaultValueAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::DefaultValueAttribute::*)(::System::Object*, ::System::Object*)>(&::Animancer::DefaultValueAttribute::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803084b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DefaultValueAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DefaultValueAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::DefaultValueAttribute::*)()>(&::Animancer::DefaultValueAttribute::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DefaultValueAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Object*& Animancer::DefaultValueAttribute::__cordl_internal_get__Primary_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Primary_k__BackingField;
}
constexpr ::System::Object* const& Animancer::DefaultValueAttribute::__cordl_internal_get__Primary_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Primary_k__BackingField;
}
constexpr void Animancer::DefaultValueAttribute::__cordl_internal_set__Primary_k__BackingField(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Primary_k__BackingField = value;
}
constexpr ::System::Object*& Animancer::DefaultValueAttribute::__cordl_internal_get__Secondary_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Secondary_k__BackingField;
}
constexpr ::System::Object* const& Animancer::DefaultValueAttribute::__cordl_internal_get__Secondary_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Secondary_k__BackingField;
}
constexpr void Animancer::DefaultValueAttribute::__cordl_internal_set__Secondary_k__BackingField(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Secondary_k__BackingField = value;
}
inline ::System::Object* Animancer::DefaultValueAttribute::get_Primary()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::DefaultValueAttribute*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Animancer::DefaultValueAttribute::set_Primary(::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::DefaultValueAttribute*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Object* Animancer::DefaultValueAttribute::get_Secondary()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::DefaultValueAttribute*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Animancer::DefaultValueAttribute::set_Secondary(::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::DefaultValueAttribute*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Animancer::DefaultValueAttribute::_ctor(::System::Object*  primary, ::System::Object*  secondary)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DefaultValueAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, primary, secondary);
}
inline void Animancer::DefaultValueAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DefaultValueAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::DefaultValueAttribute* Animancer::DefaultValueAttribute::New_ctor(::System::Object*  primary, ::System::Object*  secondary)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::DefaultValueAttribute*>(primary, secondary));
}
inline ::Animancer::DefaultValueAttribute* Animancer::DefaultValueAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::DefaultValueAttribute*>());
}
// Ctor Parameters []
constexpr ::Animancer::DefaultValueAttribute::DefaultValueAttribute()   {
}
