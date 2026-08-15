#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Data/NativeMemoryBlock.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__NativeMemoryBlock_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeMemoryBlock.get_size
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Rewired::Utils::Classes::Data::NativeMemoryBlock::*)()>(&::Rewired::Utils::Classes::Data::NativeMemoryBlock::get_size)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803924b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeMemoryBlock*>(),
                        {"get_size", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeMemoryBlock._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::NativeMemoryBlock::*)(uint32_t)>(&::Rewired::Utils::Classes::Data::NativeMemoryBlock::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181956550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeMemoryBlock*>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeMemoryBlock.Allocate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Rewired::Utils::Classes::Data::NativeMemoryBlock::*)(uint32_t, ::System::IntPtr)>(&::Rewired::Utils::Classes::Data::NativeMemoryBlock::Allocate)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181956450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeMemoryBlock*>(),
                        {"Allocate", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeMemoryBlock.Allocate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Rewired::Utils::Classes::Data::NativeMemoryBlock::*)(uint32_t)>(&::Rewired::Utils::Classes::Data::NativeMemoryBlock::Allocate)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1819563d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeMemoryBlock*>(),
                        {"Allocate", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeMemoryBlock.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::NativeMemoryBlock::*)()>(&::Rewired::Utils::Classes::Data::NativeMemoryBlock::Dispose)> {
  constexpr static std::size_t size = 0x5510;
  constexpr static std::size_t addrs = 0x180e6eca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeMemoryBlock*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeMemoryBlock.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::NativeMemoryBlock::*)()>(&::Rewired::Utils::Classes::Data::NativeMemoryBlock::Finalize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1815bcac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeMemoryBlock*>(),
                    {::i2c::class_of<::Rewired::Utils::Classes::Data::NativeMemoryBlock*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeMemoryBlock.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::NativeMemoryBlock::*)(bool)>(&::Rewired::Utils::Classes::Data::NativeMemoryBlock::Dispose)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181956510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeMemoryBlock*>(),
                    {::i2c::class_of<::Rewired::Utils::Classes::Data::NativeMemoryBlock*>(), 5}
                ));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::Utils::Classes::Data::NativeMemoryBlock::__cordl_internal_get_iAMAShnGnDcCYpqoBAuNmYQfPuQO()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iAMAShnGnDcCYpqoBAuNmYQfPuQO;
}
constexpr int32_t const& Rewired::Utils::Classes::Data::NativeMemoryBlock::__cordl_internal_get_iAMAShnGnDcCYpqoBAuNmYQfPuQO() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iAMAShnGnDcCYpqoBAuNmYQfPuQO;
}
constexpr void Rewired::Utils::Classes::Data::NativeMemoryBlock::__cordl_internal_set_iAMAShnGnDcCYpqoBAuNmYQfPuQO(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___iAMAShnGnDcCYpqoBAuNmYQfPuQO = value;
}
constexpr uint32_t& Rewired::Utils::Classes::Data::NativeMemoryBlock::__cordl_internal_get_YAvipBsCnPeRnksngiHCkYWMazLDA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___YAvipBsCnPeRnksngiHCkYWMazLDA;
}
constexpr uint32_t const& Rewired::Utils::Classes::Data::NativeMemoryBlock::__cordl_internal_get_YAvipBsCnPeRnksngiHCkYWMazLDA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___YAvipBsCnPeRnksngiHCkYWMazLDA;
}
constexpr void Rewired::Utils::Classes::Data::NativeMemoryBlock::__cordl_internal_set_YAvipBsCnPeRnksngiHCkYWMazLDA(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___YAvipBsCnPeRnksngiHCkYWMazLDA = value;
}
constexpr ::System::IntPtr& Rewired::Utils::Classes::Data::NativeMemoryBlock::__cordl_internal_get_ivFazYBybvTTfTcdWLckHcNrKlTeb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ivFazYBybvTTfTcdWLckHcNrKlTeb;
}
constexpr ::System::IntPtr const& Rewired::Utils::Classes::Data::NativeMemoryBlock::__cordl_internal_get_ivFazYBybvTTfTcdWLckHcNrKlTeb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ivFazYBybvTTfTcdWLckHcNrKlTeb;
}
constexpr void Rewired::Utils::Classes::Data::NativeMemoryBlock::__cordl_internal_set_ivFazYBybvTTfTcdWLckHcNrKlTeb(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ivFazYBybvTTfTcdWLckHcNrKlTeb = value;
}
constexpr bool& Rewired::Utils::Classes::Data::NativeMemoryBlock::__cordl_internal_get_wFJGfJSLoNoNivKuIahFbaqHHBEK()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wFJGfJSLoNoNivKuIahFbaqHHBEK;
}
constexpr bool const& Rewired::Utils::Classes::Data::NativeMemoryBlock::__cordl_internal_get_wFJGfJSLoNoNivKuIahFbaqHHBEK() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wFJGfJSLoNoNivKuIahFbaqHHBEK;
}
constexpr void Rewired::Utils::Classes::Data::NativeMemoryBlock::__cordl_internal_set_wFJGfJSLoNoNivKuIahFbaqHHBEK(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wFJGfJSLoNoNivKuIahFbaqHHBEK = value;
}
inline uint32_t Rewired::Utils::Classes::Data::NativeMemoryBlock::get_size()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeMemoryBlock*>(),
                        {"get_size", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::Data::NativeMemoryBlock::_ctor(uint32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeMemoryBlock*>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr Rewired::Utils::Classes::Data::NativeMemoryBlock::Allocate(uint32_t  bytes, ::System::IntPtr  ptrToData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeMemoryBlock*>(),
                        {"Allocate", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, bytes, ptrToData);
}
inline ::System::IntPtr Rewired::Utils::Classes::Data::NativeMemoryBlock::Allocate(uint32_t  bytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeMemoryBlock*>(),
                        {"Allocate", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, bytes);
}
inline void Rewired::Utils::Classes::Data::NativeMemoryBlock::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeMemoryBlock*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::Data::NativeMemoryBlock::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Classes::Data::NativeMemoryBlock*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::Data::NativeMemoryBlock::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Classes::Data::NativeMemoryBlock*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::Rewired::Utils::Classes::Data::NativeMemoryBlock* Rewired::Utils::Classes::Data::NativeMemoryBlock::New_ctor(uint32_t  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Utils::Classes::Data::NativeMemoryBlock*>(_cordl_fixed_empty_name_whitespace));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Rewired::Utils::Classes::Data::NativeMemoryBlock::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Rewired::Utils::Classes::Data::NativeMemoryBlock::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::Utils::Classes::Data::NativeMemoryBlock::NativeMemoryBlock()   {
}
