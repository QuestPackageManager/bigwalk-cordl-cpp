#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlSerializationReadCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlSerializationReadCallback_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReadCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationReadCallback::*)(::System::Object*, ::System::IntPtr)>(&::System::Xml::Serialization::XmlSerializationReadCallback::_ctor)> {
  constexpr static std::size_t size = 0x840;
  constexpr static std::size_t addrs = 0x1813c2d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Serialization::XmlSerializationReadCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReadCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReadCallback::*)()>(&::System::Xml::Serialization::XmlSerializationReadCallback::Invoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dc3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Xml::Serialization::XmlSerializationReadCallback*>(),
                    {::i2c::class_of<::System::Xml::Serialization::XmlSerializationReadCallback*>(), 12}
                ));
    return ___internal_method;
  }
};
inline void System::Xml::Serialization::XmlSerializationReadCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::Serialization::XmlSerializationReadCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReadCallback::Invoke()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Xml::Serialization::XmlSerializationReadCallback*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Xml::Serialization::XmlSerializationReadCallback* System::Xml::Serialization::XmlSerializationReadCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Serialization::XmlSerializationReadCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlSerializationReadCallback::XmlSerializationReadCallback()   {
}
