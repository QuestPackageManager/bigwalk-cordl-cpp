#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsBioMemory.hpp"
#include "Mono/Btls/zzzz__MonoBtlsBio_impl.hpp"
#include "Mono/Btls/zzzz__MonoBtlsBioMemory_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Mono::Btls::MonoBtlsBioMemory.mono_btls_bio_mem_new
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::Mono::Btls::MonoBtlsBioMemory::mono_btls_bio_mem_new)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181b425d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsBioMemory*>(),
                        {"mono_btls_bio_mem_new", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsBioMemory.mono_btls_bio_mem_get_data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::System::IntPtr>)>(&::Mono::Btls::MonoBtlsBioMemory::mono_btls_bio_mem_get_data)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181b42540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsBioMemory*>(),
                        {"mono_btls_bio_mem_get_data", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsBioMemory._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsBioMemory::*)()>(&::Mono::Btls::MonoBtlsBioMemory::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181b42490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsBioMemory*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsBioMemory.GetData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Btls::MonoBtlsBioMemory::*)()>(&::Mono::Btls::MonoBtlsBioMemory::GetData)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x181b42290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsBioMemory*>(),
                        {"GetData", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Mono::Btls::MonoBtlsBioMemory::mono_btls_bio_mem_new()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsBioMemory*>(),
                        {"mono_btls_bio_mem_new", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline int32_t Mono::Btls::MonoBtlsBioMemory::mono_btls_bio_mem_get_data(::System::IntPtr  handle, ::by_ref<::System::IntPtr>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsBioMemory*>(),
                        {"mono_btls_bio_mem_get_data", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, handle, data);
}
inline void Mono::Btls::MonoBtlsBioMemory::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsBioMemory*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Mono::Btls::MonoBtlsBioMemory::GetData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsBioMemory*>(),
                        {"GetData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Mono::Btls::MonoBtlsBioMemory* Mono::Btls::MonoBtlsBioMemory::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Btls::MonoBtlsBioMemory*>());
}
// Ctor Parameters []
constexpr ::Mono::Btls::MonoBtlsBioMemory::MonoBtlsBioMemory()   {
}
