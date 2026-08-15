#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/AsyncMethodBuilderAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncMethodBuilderAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::AsyncMethodBuilderAttribute.get_BuilderType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Runtime::CompilerServices::AsyncMethodBuilderAttribute::*)()>(&::System::Runtime::CompilerServices::AsyncMethodBuilderAttribute::get_BuilderType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::CompilerServices::AsyncMethodBuilderAttribute*>(),
                        {"get_BuilderType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::AsyncMethodBuilderAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::AsyncMethodBuilderAttribute::*)(::System::Type*)>(&::System::Runtime::CompilerServices::AsyncMethodBuilderAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::CompilerServices::AsyncMethodBuilderAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Type*& System::Runtime::CompilerServices::AsyncMethodBuilderAttribute::__cordl_internal_get__BuilderType_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BuilderType_k__BackingField;
}
constexpr ::System::Type* const& System::Runtime::CompilerServices::AsyncMethodBuilderAttribute::__cordl_internal_get__BuilderType_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BuilderType_k__BackingField;
}
constexpr void System::Runtime::CompilerServices::AsyncMethodBuilderAttribute::__cordl_internal_set__BuilderType_k__BackingField(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BuilderType_k__BackingField = value;
}
inline ::System::Type* System::Runtime::CompilerServices::AsyncMethodBuilderAttribute::get_BuilderType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::CompilerServices::AsyncMethodBuilderAttribute*>(),
                        {"get_BuilderType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline void System::Runtime::CompilerServices::AsyncMethodBuilderAttribute::_ctor(::System::Type*  builderType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::CompilerServices::AsyncMethodBuilderAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, builderType);
}
inline ::System::Runtime::CompilerServices::AsyncMethodBuilderAttribute* System::Runtime::CompilerServices::AsyncMethodBuilderAttribute::New_ctor(::System::Type*  builderType)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::CompilerServices::AsyncMethodBuilderAttribute*>(builderType));
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::AsyncMethodBuilderAttribute::AsyncMethodBuilderAttribute()   {
}
