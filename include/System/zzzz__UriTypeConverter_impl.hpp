#pragma once
// IWYU pragma private; include "System/UriTypeConverter.hpp"
#include "System/ComponentModel/zzzz__TypeConverter_impl.hpp"
#include "System/zzzz__UriTypeConverter_def.hpp"
#include "System/ComponentModel/zzzz__ITypeDescriptorContext_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::UriTypeConverter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::UriTypeConverter::*)()>(&::System::UriTypeConverter::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::UriTypeConverter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriTypeConverter.CanConvert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::UriTypeConverter::*)(::System::Type*)>(&::System::UriTypeConverter::CanConvert)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181dd5c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::UriTypeConverter*>(),
                        {"CanConvert", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriTypeConverter.CanConvertFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::UriTypeConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*)>(&::System::UriTypeConverter::CanConvertFrom)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181dd5b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::UriTypeConverter*>(),
                    {::i2c::class_of<::System::UriTypeConverter*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriTypeConverter.CanConvertTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::UriTypeConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*)>(&::System::UriTypeConverter::CanConvertTo)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181dd5bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::UriTypeConverter*>(),
                    {::i2c::class_of<::System::UriTypeConverter*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriTypeConverter.ConvertFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::UriTypeConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*)>(&::System::UriTypeConverter::ConvertFrom)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181dd5ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::UriTypeConverter*>(),
                    {::i2c::class_of<::System::UriTypeConverter*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriTypeConverter.ConvertTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::UriTypeConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*)>(&::System::UriTypeConverter::ConvertTo)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x181dd5e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::UriTypeConverter*>(),
                    {::i2c::class_of<::System::UriTypeConverter*>(), 7}
                ));
    return ___internal_method;
  }
};
inline void System::UriTypeConverter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::UriTypeConverter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::UriTypeConverter::CanConvert(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::UriTypeConverter*>(),
                        {"CanConvert", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type);
}
inline bool System::UriTypeConverter::CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext*  context, ::System::Type*  sourceType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::UriTypeConverter*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context, sourceType);
}
inline bool System::UriTypeConverter::CanConvertTo(::System::ComponentModel::ITypeDescriptorContext*  context, ::System::Type*  destinationType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::UriTypeConverter*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context, destinationType);
}
inline ::System::Object* System::UriTypeConverter::ConvertFrom(::System::ComponentModel::ITypeDescriptorContext*  context, ::System::Globalization::CultureInfo*  culture, ::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::UriTypeConverter*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, context, culture, value);
}
inline ::System::Object* System::UriTypeConverter::ConvertTo(::System::ComponentModel::ITypeDescriptorContext*  context, ::System::Globalization::CultureInfo*  culture, ::System::Object*  value, ::System::Type*  destinationType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::UriTypeConverter*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, context, culture, value, destinationType);
}
inline ::System::UriTypeConverter* System::UriTypeConverter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::UriTypeConverter*>());
}
// Ctor Parameters []
constexpr ::System::UriTypeConverter::UriTypeConverter()   {
}
