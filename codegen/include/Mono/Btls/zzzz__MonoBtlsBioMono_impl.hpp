#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsBioMono.hpp"
#include "Mono/Btls/zzzz__MonoBtlsBio_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Mono/Btls/zzzz__MonoBtlsBioMono_def.hpp"
#include "Mono/Btls/zzzz__IMonoBtlsBioMono_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsBioMono_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Btls::MonoBtlsBioMono_ControlCommand::MonoBtlsBioMono_ControlCommand(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Mono::Btls::MonoBtlsBioMono_ControlCommand::MonoBtlsBioMono_ControlCommand()   {
}
constexpr ::Mono::Btls::MonoBtlsBioMono_ControlCommand  Mono::Btls::MonoBtlsBioMono_ControlCommand::Flush{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsBioMono_BioReadFunc._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsBioMono_BioReadFunc::*)(::System::Object*, ::System::IntPtr)>(&::Mono::Btls::MonoBtlsBioMono_BioReadFunc::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181b3db10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsBioMono_BioReadFunc*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsBioMono_BioReadFunc.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Btls::MonoBtlsBioMono_BioReadFunc::*)(::System::IntPtr, ::System::IntPtr, int32_t, ::by_ref<int32_t>)>(&::Mono::Btls::MonoBtlsBioMono_BioReadFunc::Invoke)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805522b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::MonoBtlsBioMono_BioReadFunc*>(),
                    {::i2c::class_of<::Mono::Btls::MonoBtlsBioMono_BioReadFunc*>(), 12}
                ));
    return ___internal_method;
  }
};
inline void Mono::Btls::MonoBtlsBioMono_BioReadFunc::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsBioMono_BioReadFunc*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline int32_t Mono::Btls::MonoBtlsBioMono_BioReadFunc::Invoke(::System::IntPtr  bio, ::System::IntPtr  data, int32_t  dataLength, ::by_ref<int32_t>  wantMore)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::MonoBtlsBioMono_BioReadFunc*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bio, data, dataLength, wantMore);
}
inline ::Mono::Btls::MonoBtlsBioMono_BioReadFunc* Mono::Btls::MonoBtlsBioMono_BioReadFunc::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Btls::MonoBtlsBioMono_BioReadFunc*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Btls::MonoBtlsBioMono_BioReadFunc::MonoBtlsBioMono_BioReadFunc()   {
}
//  Writing Method size for method: ::Mono::Btls::MonoBtlsBioMono_BioWriteFunc._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsBioMono_BioWriteFunc::*)(::System::Object*, ::System::IntPtr)>(&::Mono::Btls::MonoBtlsBioMono_BioWriteFunc::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181b3dc50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsBioMono_BioWriteFunc*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsBioMono_BioWriteFunc.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Btls::MonoBtlsBioMono_BioWriteFunc::*)(::System::IntPtr, ::System::IntPtr, int32_t)>(&::Mono::Btls::MonoBtlsBioMono_BioWriteFunc::Invoke)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x1803828b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::MonoBtlsBioMono_BioWriteFunc*>(),
                    {::i2c::class_of<::Mono::Btls::MonoBtlsBioMono_BioWriteFunc*>(), 12}
                ));
    return ___internal_method;
  }
};
inline void Mono::Btls::MonoBtlsBioMono_BioWriteFunc::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsBioMono_BioWriteFunc*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline int32_t Mono::Btls::MonoBtlsBioMono_BioWriteFunc::Invoke(::System::IntPtr  bio, ::System::IntPtr  data, int32_t  dataLength)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::MonoBtlsBioMono_BioWriteFunc*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bio, data, dataLength);
}
inline ::Mono::Btls::MonoBtlsBioMono_BioWriteFunc* Mono::Btls::MonoBtlsBioMono_BioWriteFunc::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Btls::MonoBtlsBioMono_BioWriteFunc*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Btls::MonoBtlsBioMono_BioWriteFunc::MonoBtlsBioMono_BioWriteFunc()   {
}
//  Writing Method size for method: ::Mono::Btls::MonoBtlsBioMono_BioControlFunc._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsBioMono_BioControlFunc::*)(::System::Object*, ::System::IntPtr)>(&::Mono::Btls::MonoBtlsBioMono_BioControlFunc::_ctor)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181b3d9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsBioMono_BioControlFunc*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsBioMono_BioControlFunc.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Mono::Btls::MonoBtlsBioMono_BioControlFunc::*)(::System::IntPtr, ::Mono::Btls::MonoBtlsBioMono_ControlCommand, int64_t)>(&::Mono::Btls::MonoBtlsBioMono_BioControlFunc::Invoke)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x1803828b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::MonoBtlsBioMono_BioControlFunc*>(),
                    {::i2c::class_of<::Mono::Btls::MonoBtlsBioMono_BioControlFunc*>(), 12}
                ));
    return ___internal_method;
  }
};
inline void Mono::Btls::MonoBtlsBioMono_BioControlFunc::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsBioMono_BioControlFunc*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline int64_t Mono::Btls::MonoBtlsBioMono_BioControlFunc::Invoke(::System::IntPtr  bio, ::Mono::Btls::MonoBtlsBioMono_ControlCommand  command, int64_t  arg)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::MonoBtlsBioMono_BioControlFunc*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, bio, command, arg);
}
inline ::Mono::Btls::MonoBtlsBioMono_BioControlFunc* Mono::Btls::MonoBtlsBioMono_BioControlFunc::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Btls::MonoBtlsBioMono_BioControlFunc*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Btls::MonoBtlsBioMono_BioControlFunc::MonoBtlsBioMono_BioControlFunc()   {
}
//  Writing Method size for method: ::Mono::Btls::MonoBtlsBioMono._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsBioMono::*)(::Mono::Btls::IMonoBtlsBioMono*)>(&::Mono::Btls::MonoBtlsBioMono::_ctor)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x181b42dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsBioMono*>(),
                        {".ctor", {}, {::i2c::type_of<::Mono::Btls::IMonoBtlsBioMono*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsBioMono.mono_btls_bio_mono_new
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::Mono::Btls::MonoBtlsBioMono::mono_btls_bio_mono_new)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181b43270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsBioMono*>(),
                        {"mono_btls_bio_mono_new", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsBioMono.mono_btls_bio_mono_initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr)>(&::Mono::Btls::MonoBtlsBioMono::mono_btls_bio_mono_initialize)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181b431b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsBioMono*>(),
                        {"mono_btls_bio_mono_initialize", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsBioMono.Control
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Mono::Btls::MonoBtlsBioMono::*)(::Mono::Btls::MonoBtlsBioMono_ControlCommand, int64_t)>(&::Mono::Btls::MonoBtlsBioMono::Control)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181b42790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsBioMono*>(),
                        {"Control", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsBioMono_ControlCommand>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsBioMono.OnRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Btls::MonoBtlsBioMono::*)(::System::IntPtr, int32_t, ::by_ref<int32_t>)>(&::Mono::Btls::MonoBtlsBioMono::OnRead)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181b429c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsBioMono*>(),
                        {"OnRead", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsBioMono.OnRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr, int32_t, ::by_ref<int32_t>)>(&::Mono::Btls::MonoBtlsBioMono::OnRead)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x181b427d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsBioMono*>(),
                        {"OnRead", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsBioMono.OnWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Btls::MonoBtlsBioMono::*)(::System::IntPtr, int32_t)>(&::Mono::Btls::MonoBtlsBioMono::OnWrite)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181b42ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsBioMono*>(),
                        {"OnWrite", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsBioMono.OnWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr, int32_t)>(&::Mono::Btls::MonoBtlsBioMono::OnWrite)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x181b42bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsBioMono*>(),
                        {"OnWrite", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsBioMono.Control
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::System::IntPtr, ::Mono::Btls::MonoBtlsBioMono_ControlCommand, int64_t)>(&::Mono::Btls::MonoBtlsBioMono::Control)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181b42690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsBioMono*>(),
                        {"Control", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Mono::Btls::MonoBtlsBioMono_ControlCommand>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsBioMono.Close
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsBioMono::*)()>(&::Mono::Btls::MonoBtlsBioMono::Close)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181b42640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::MonoBtlsBioMono*>(),
                    {::i2c::class_of<::Mono::Btls::MonoBtlsBioMono*>(), 5}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::GCHandle& Mono::Btls::MonoBtlsBioMono::__cordl_internal_get_handle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handle;
}
constexpr ::System::Runtime::InteropServices::GCHandle const& Mono::Btls::MonoBtlsBioMono::__cordl_internal_get_handle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handle;
}
constexpr void Mono::Btls::MonoBtlsBioMono::__cordl_internal_set_handle(::System::Runtime::InteropServices::GCHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handle = value;
}
constexpr ::System::IntPtr& Mono::Btls::MonoBtlsBioMono::__cordl_internal_get_instance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instance;
}
constexpr ::System::IntPtr const& Mono::Btls::MonoBtlsBioMono::__cordl_internal_get_instance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instance;
}
constexpr void Mono::Btls::MonoBtlsBioMono::__cordl_internal_set_instance(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___instance = value;
}
constexpr ::Mono::Btls::MonoBtlsBioMono_BioReadFunc*& Mono::Btls::MonoBtlsBioMono::__cordl_internal_get_readFunc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___readFunc;
}
constexpr ::Mono::Btls::MonoBtlsBioMono_BioReadFunc* const& Mono::Btls::MonoBtlsBioMono::__cordl_internal_get_readFunc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___readFunc;
}
constexpr void Mono::Btls::MonoBtlsBioMono::__cordl_internal_set_readFunc(::Mono::Btls::MonoBtlsBioMono_BioReadFunc*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___readFunc = value;
}
constexpr ::Mono::Btls::MonoBtlsBioMono_BioWriteFunc*& Mono::Btls::MonoBtlsBioMono::__cordl_internal_get_writeFunc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___writeFunc;
}
constexpr ::Mono::Btls::MonoBtlsBioMono_BioWriteFunc* const& Mono::Btls::MonoBtlsBioMono::__cordl_internal_get_writeFunc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___writeFunc;
}
constexpr void Mono::Btls::MonoBtlsBioMono::__cordl_internal_set_writeFunc(::Mono::Btls::MonoBtlsBioMono_BioWriteFunc*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___writeFunc = value;
}
constexpr ::Mono::Btls::MonoBtlsBioMono_BioControlFunc*& Mono::Btls::MonoBtlsBioMono::__cordl_internal_get_controlFunc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controlFunc;
}
constexpr ::Mono::Btls::MonoBtlsBioMono_BioControlFunc* const& Mono::Btls::MonoBtlsBioMono::__cordl_internal_get_controlFunc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controlFunc;
}
constexpr void Mono::Btls::MonoBtlsBioMono::__cordl_internal_set_controlFunc(::Mono::Btls::MonoBtlsBioMono_BioControlFunc*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___controlFunc = value;
}
constexpr ::System::IntPtr& Mono::Btls::MonoBtlsBioMono::__cordl_internal_get_readFuncPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___readFuncPtr;
}
constexpr ::System::IntPtr const& Mono::Btls::MonoBtlsBioMono::__cordl_internal_get_readFuncPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___readFuncPtr;
}
constexpr void Mono::Btls::MonoBtlsBioMono::__cordl_internal_set_readFuncPtr(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___readFuncPtr = value;
}
constexpr ::System::IntPtr& Mono::Btls::MonoBtlsBioMono::__cordl_internal_get_writeFuncPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___writeFuncPtr;
}
constexpr ::System::IntPtr const& Mono::Btls::MonoBtlsBioMono::__cordl_internal_get_writeFuncPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___writeFuncPtr;
}
constexpr void Mono::Btls::MonoBtlsBioMono::__cordl_internal_set_writeFuncPtr(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___writeFuncPtr = value;
}
constexpr ::System::IntPtr& Mono::Btls::MonoBtlsBioMono::__cordl_internal_get_controlFuncPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controlFuncPtr;
}
constexpr ::System::IntPtr const& Mono::Btls::MonoBtlsBioMono::__cordl_internal_get_controlFuncPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controlFuncPtr;
}
constexpr void Mono::Btls::MonoBtlsBioMono::__cordl_internal_set_controlFuncPtr(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___controlFuncPtr = value;
}
constexpr ::Mono::Btls::IMonoBtlsBioMono*& Mono::Btls::MonoBtlsBioMono::__cordl_internal_get_backend()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backend;
}
constexpr ::Mono::Btls::IMonoBtlsBioMono* const& Mono::Btls::MonoBtlsBioMono::__cordl_internal_get_backend() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backend;
}
constexpr void Mono::Btls::MonoBtlsBioMono::__cordl_internal_set_backend(::Mono::Btls::IMonoBtlsBioMono*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___backend = value;
}
inline void Mono::Btls::MonoBtlsBioMono::_ctor(::Mono::Btls::IMonoBtlsBioMono*  backend)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsBioMono*>(),
                        {".ctor", {}, {::i2c::type_of<::Mono::Btls::IMonoBtlsBioMono*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, backend);
}
inline ::System::IntPtr Mono::Btls::MonoBtlsBioMono::mono_btls_bio_mono_new()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsBioMono*>(),
                        {"mono_btls_bio_mono_new", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void Mono::Btls::MonoBtlsBioMono::mono_btls_bio_mono_initialize(::System::IntPtr  handle, ::System::IntPtr  instance, ::System::IntPtr  readFunc, ::System::IntPtr  writeFunc, ::System::IntPtr  controlFunc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsBioMono*>(),
                        {"mono_btls_bio_mono_initialize", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, instance, readFunc, writeFunc, controlFunc);
}
inline int64_t Mono::Btls::MonoBtlsBioMono::Control(::Mono::Btls::MonoBtlsBioMono_ControlCommand  command, int64_t  arg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsBioMono*>(),
                        {"Control", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsBioMono_ControlCommand>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, command, arg);
}
inline int32_t Mono::Btls::MonoBtlsBioMono::OnRead(::System::IntPtr  data, int32_t  dataLength, ::by_ref<int32_t>  wantMore)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsBioMono*>(),
                        {"OnRead", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, data, dataLength, wantMore);
}
inline int32_t Mono::Btls::MonoBtlsBioMono::OnRead(::System::IntPtr  instance, ::System::IntPtr  data, int32_t  dataLength, ::by_ref<int32_t>  wantMore)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsBioMono*>(),
                        {"OnRead", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, instance, data, dataLength, wantMore);
}
inline int32_t Mono::Btls::MonoBtlsBioMono::OnWrite(::System::IntPtr  data, int32_t  dataLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsBioMono*>(),
                        {"OnWrite", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, data, dataLength);
}
inline int32_t Mono::Btls::MonoBtlsBioMono::OnWrite(::System::IntPtr  instance, ::System::IntPtr  data, int32_t  dataLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsBioMono*>(),
                        {"OnWrite", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, instance, data, dataLength);
}
inline int64_t Mono::Btls::MonoBtlsBioMono::Control(::System::IntPtr  instance, ::Mono::Btls::MonoBtlsBioMono_ControlCommand  command, int64_t  arg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsBioMono*>(),
                        {"Control", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Mono::Btls::MonoBtlsBioMono_ControlCommand>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, instance, command, arg);
}
inline void Mono::Btls::MonoBtlsBioMono::Close()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::MonoBtlsBioMono*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mono::Btls::MonoBtlsBioMono* Mono::Btls::MonoBtlsBioMono::New_ctor(::Mono::Btls::IMonoBtlsBioMono*  backend)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Btls::MonoBtlsBioMono*>(backend));
}
// Ctor Parameters []
constexpr ::Mono::Btls::MonoBtlsBioMono::MonoBtlsBioMono()   {
}
