#pragma once
// IWYU pragma private; include "Dissonance/Datastructures/POTBuffer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/Datastructures/zzzz__POTBuffer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Dissonance::Datastructures::POTBuffer.get_MaxCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Dissonance::Datastructures::POTBuffer::*)()>(&::Dissonance::Datastructures::POTBuffer::get_MaxCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f41a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::POTBuffer*>(),
                        {"get_MaxCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Datastructures::POTBuffer.set_MaxCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Datastructures::POTBuffer::*)(uint32_t)>(&::Dissonance::Datastructures::POTBuffer::set_MaxCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f4390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::POTBuffer*>(),
                        {"set_MaxCount", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Datastructures::POTBuffer.get_Pow2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Dissonance::Datastructures::POTBuffer::*)()>(&::Dissonance::Datastructures::POTBuffer::get_Pow2)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802f4180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::POTBuffer*>(),
                        {"get_Pow2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Datastructures::POTBuffer.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Dissonance::Datastructures::POTBuffer::*)()>(&::Dissonance::Datastructures::POTBuffer::get_Count)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f42c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::POTBuffer*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Datastructures::POTBuffer.set_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Datastructures::POTBuffer::*)(uint32_t)>(&::Dissonance::Datastructures::POTBuffer::set_Count)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f43d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::POTBuffer*>(),
                        {"set_Count", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Datastructures::POTBuffer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Datastructures::POTBuffer::*)(uint8_t)>(&::Dissonance::Datastructures::POTBuffer::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805e1ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::POTBuffer*>(),
                        {".ctor", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Datastructures::POTBuffer.Free
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Datastructures::POTBuffer::*)()>(&::Dissonance::Datastructures::POTBuffer::Free)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805e1b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::POTBuffer*>(),
                        {"Free", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Datastructures::POTBuffer.Alloc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Datastructures::POTBuffer::*)(uint32_t)>(&::Dissonance::Datastructures::POTBuffer::Alloc)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805e1a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::POTBuffer*>(),
                        {"Alloc", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Datastructures::POTBuffer.Expand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Datastructures::POTBuffer::*)(int32_t)>(&::Dissonance::Datastructures::POTBuffer::Expand)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805e1a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::POTBuffer*>(),
                        {"Expand", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Datastructures::POTBuffer.GetBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<float_t> (::Dissonance::Datastructures::POTBuffer::*)(::by_ref<uint32_t>, bool)>(&::Dissonance::Datastructures::POTBuffer::GetBuffer)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1805e1b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::POTBuffer*>(),
                        {"GetBuffer", {}, {::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::ArrayW<float_t>>*& Dissonance::Datastructures::POTBuffer::__cordl_internal_get__buffers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buffers;
}
constexpr ::System::Collections::Generic::List_1<::ArrayW<float_t>>* const& Dissonance::Datastructures::POTBuffer::__cordl_internal_get__buffers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buffers;
}
constexpr void Dissonance::Datastructures::POTBuffer::__cordl_internal_set__buffers(::System::Collections::Generic::List_1<::ArrayW<float_t>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buffers = value;
}
constexpr uint32_t& Dissonance::Datastructures::POTBuffer::__cordl_internal_get__MaxCount_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaxCount_k__BackingField;
}
constexpr uint32_t const& Dissonance::Datastructures::POTBuffer::__cordl_internal_get__MaxCount_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaxCount_k__BackingField;
}
constexpr void Dissonance::Datastructures::POTBuffer::__cordl_internal_set__MaxCount_k__BackingField(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MaxCount_k__BackingField = value;
}
constexpr uint32_t& Dissonance::Datastructures::POTBuffer::__cordl_internal_get__Count_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Count_k__BackingField;
}
constexpr uint32_t const& Dissonance::Datastructures::POTBuffer::__cordl_internal_get__Count_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Count_k__BackingField;
}
constexpr void Dissonance::Datastructures::POTBuffer::__cordl_internal_set__Count_k__BackingField(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Count_k__BackingField = value;
}
inline uint32_t Dissonance::Datastructures::POTBuffer::get_MaxCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::POTBuffer*>(),
                        {"get_MaxCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void Dissonance::Datastructures::POTBuffer::set_MaxCount(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::POTBuffer*>(),
                        {"set_MaxCount", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint32_t Dissonance::Datastructures::POTBuffer::get_Pow2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::POTBuffer*>(),
                        {"get_Pow2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline uint32_t Dissonance::Datastructures::POTBuffer::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::POTBuffer*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void Dissonance::Datastructures::POTBuffer::set_Count(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::POTBuffer*>(),
                        {"set_Count", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Datastructures::POTBuffer::_ctor(uint8_t  initialMaxPow)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::POTBuffer*>(),
                        {".ctor", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initialMaxPow);
}
inline void Dissonance::Datastructures::POTBuffer::Free()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::POTBuffer*>(),
                        {"Free", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Datastructures::POTBuffer::Alloc(uint32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::POTBuffer*>(),
                        {"Alloc", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, count);
}
inline bool Dissonance::Datastructures::POTBuffer::Expand(int32_t  limit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::POTBuffer*>(),
                        {"Expand", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, limit);
}
inline ::ArrayW<float_t> Dissonance::Datastructures::POTBuffer::GetBuffer(::by_ref<uint32_t>  count, bool  zeroed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Datastructures::POTBuffer*>(),
                        {"GetBuffer", {}, {::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>>(this, ___internal_method, count, zeroed);
}
inline ::Dissonance::Datastructures::POTBuffer* Dissonance::Datastructures::POTBuffer::New_ctor(uint8_t  initialMaxPow)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Datastructures::POTBuffer*>(initialMaxPow));
}
// Ctor Parameters []
constexpr ::Dissonance::Datastructures::POTBuffer::POTBuffer()   {
}
