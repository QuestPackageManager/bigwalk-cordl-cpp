#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/SwitchExpressionException.hpp"
#include "System/zzzz__InvalidOperationException_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__SwitchExpressionException_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::SwitchExpressionException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::SwitchExpressionException::*)()>(&::System::Runtime::CompilerServices::SwitchExpressionException::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18166d020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::CompilerServices::SwitchExpressionException*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::SwitchExpressionException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::SwitchExpressionException::*)(::System::Object*)>(&::System::Runtime::CompilerServices::SwitchExpressionException::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18166cfe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::CompilerServices::SwitchExpressionException*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::SwitchExpressionException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::SwitchExpressionException::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Runtime::CompilerServices::SwitchExpressionException::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18166d030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::CompilerServices::SwitchExpressionException*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::SwitchExpressionException.get_UnmatchedValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::CompilerServices::SwitchExpressionException::*)()>(&::System::Runtime::CompilerServices::SwitchExpressionException::get_UnmatchedValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180312ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::CompilerServices::SwitchExpressionException*>(),
                        {"get_UnmatchedValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::SwitchExpressionException.GetObjectData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::SwitchExpressionException::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Runtime::CompilerServices::SwitchExpressionException::GetObjectData)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18166cf70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Runtime::CompilerServices::SwitchExpressionException*>(),
                    {::i2c::class_of<::System::Runtime::CompilerServices::SwitchExpressionException*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::SwitchExpressionException.get_Message
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::CompilerServices::SwitchExpressionException::*)()>(&::System::Runtime::CompilerServices::SwitchExpressionException::get_Message)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18166d0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Runtime::CompilerServices::SwitchExpressionException*>(),
                    {::i2c::class_of<::System::Runtime::CompilerServices::SwitchExpressionException*>(), 5}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::Runtime::CompilerServices::SwitchExpressionException::__cordl_internal_get__UnmatchedValue_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UnmatchedValue_k__BackingField;
}
constexpr ::System::Object* const& System::Runtime::CompilerServices::SwitchExpressionException::__cordl_internal_get__UnmatchedValue_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UnmatchedValue_k__BackingField;
}
constexpr void System::Runtime::CompilerServices::SwitchExpressionException::__cordl_internal_set__UnmatchedValue_k__BackingField(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UnmatchedValue_k__BackingField = value;
}
inline void System::Runtime::CompilerServices::SwitchExpressionException::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::CompilerServices::SwitchExpressionException*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::CompilerServices::SwitchExpressionException::_ctor(::System::Object*  unmatchedValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::CompilerServices::SwitchExpressionException*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, unmatchedValue);
}
inline void System::Runtime::CompilerServices::SwitchExpressionException::_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::CompilerServices::SwitchExpressionException*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline ::System::Object* System::Runtime::CompilerServices::SwitchExpressionException::get_UnmatchedValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::CompilerServices::SwitchExpressionException*>(),
                        {"get_UnmatchedValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void System::Runtime::CompilerServices::SwitchExpressionException::GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Runtime::CompilerServices::SwitchExpressionException*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline ::StringW System::Runtime::CompilerServices::SwitchExpressionException::get_Message()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Runtime::CompilerServices::SwitchExpressionException*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Runtime::CompilerServices::SwitchExpressionException* System::Runtime::CompilerServices::SwitchExpressionException::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::CompilerServices::SwitchExpressionException*>());
}
inline ::System::Runtime::CompilerServices::SwitchExpressionException* System::Runtime::CompilerServices::SwitchExpressionException::New_ctor(::System::Object*  unmatchedValue)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::CompilerServices::SwitchExpressionException*>(unmatchedValue));
}
inline ::System::Runtime::CompilerServices::SwitchExpressionException* System::Runtime::CompilerServices::SwitchExpressionException::New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::CompilerServices::SwitchExpressionException*>(info, context));
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::SwitchExpressionException::SwitchExpressionException()   {
}
