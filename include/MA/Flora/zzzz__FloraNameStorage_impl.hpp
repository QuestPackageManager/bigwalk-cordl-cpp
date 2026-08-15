#pragma once
// IWYU pragma private; include "MA/Flora/FloraNameStorage.hpp"
#include "Unity/Burst/zzzz__SharedStatic_1_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeList_1_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeParallelMultiHashMap_2_impl.hpp"
#include "Unity/Collections/zzzz__FixedString512Bytes_impl.hpp"
#include "MA/Flora/zzzz__FloraNameStorage_def.hpp"
#include "MA/Flora/zzzz__FloraNameStorage_def.hpp"
#include "Unity/Collections/zzzz__FixedString64Bytes_def.hpp"
// Ctor Parameters [CppParam { name: "Offset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Length", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::FloraNameStorage_Entry::FloraNameStorage_Entry(int32_t  Offset, int32_t  Length) noexcept  {
this->Offset = Offset;
this->Length = Length;
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraNameStorage_Entry::FloraNameStorage_Entry()   {
}
// Ctor Parameters [CppParam { name: "Initialized", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "HasLoggedError", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Buffer", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "Entry", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::FloraNameStorage_Entry>", modifiers: "", def_value: Some("{}") }, CppParam { name: "Hash", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMap_2<int32_t,int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "Chars", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Entries", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "KMaxEntriesMsg", ty: "::Unity::Collections::FixedString512Bytes", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::FloraNameStorage_State::FloraNameStorage_State(uint8_t  Initialized, uint8_t  HasLoggedError, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<uint8_t>  Buffer, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::FloraNameStorage_Entry>  Entry, ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMap_2<int32_t,int32_t>  Hash, int32_t  Chars, int32_t  Entries, ::Unity::Collections::FixedString512Bytes  KMaxEntriesMsg) noexcept  {
this->Initialized = Initialized;
this->HasLoggedError = HasLoggedError;
this->Buffer = Buffer;
this->Entry = Entry;
this->Hash = Hash;
this->Chars = Chars;
this->Entries = Entries;
this->KMaxEntriesMsg = KMaxEntriesMsg;
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraNameStorage_State::FloraNameStorage_State()   {
}
//  Writing Method size for method: ::MA::Flora::FloraNameStorage.get_Entries
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::MA::Flora::FloraNameStorage::get_Entries)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18147d8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraNameStorage>(),
                        {"get_Entries", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraNameStorage.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::MA::Flora::FloraNameStorage::Initialize)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x18147d460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraNameStorage>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraNameStorage.Shutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::MA::Flora::FloraNameStorage::Shutdown)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18147d7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraNameStorage>(),
                        {"Shutdown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraNameStorage.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::MA::Flora::FloraNameStorage::Clear)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18147cee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraNameStorage>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraNameStorage.GetFixedString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::by_ref<::Unity::Collections::FixedString64Bytes>)>(&::MA::Flora::FloraNameStorage::GetFixedString)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18147d060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraNameStorage>(),
                        {"GetFixedString", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraNameStorage.GetIndexFromHashAndFixedString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, ::by_ref<::Unity::Collections::FixedString64Bytes>)>(&::MA::Flora::FloraNameStorage::GetIndexFromHashAndFixedString)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x18147d110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraNameStorage>(),
                        {"GetIndexFromHashAndFixedString", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraNameStorage.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Collections::FixedString64Bytes>)>(&::MA::Flora::FloraNameStorage::Contains)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18147d000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraNameStorage>(),
                        {"Contains", {}, {::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraNameStorage.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::MA::Flora::FloraNameStorage::Contains)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18147cf70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraNameStorage>(),
                        {"Contains", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraNameStorage.GetOrCreateIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::Unity::Collections::FixedString64Bytes>)>(&::MA::Flora::FloraNameStorage::GetOrCreateIndex)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x18147d270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraNameStorage>(),
                        {"GetOrCreateIndex", {}, {::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::FloraNameStorage::setStaticF_SharedState(::Unity::Burst::SharedStatic_1<::MA::Flora::FloraNameStorage_State>  value)  {
::cordl_internals::setStaticField<::Unity::Burst::SharedStatic_1<::MA::Flora::FloraNameStorage_State>, "SharedState", ::MA::Flora::FloraNameStorage>(std::forward<::Unity::Burst::SharedStatic_1<::MA::Flora::FloraNameStorage_State>>(value));
}
inline ::Unity::Burst::SharedStatic_1<::MA::Flora::FloraNameStorage_State> MA::Flora::FloraNameStorage::getStaticF_SharedState()  {
return ::cordl_internals::getStaticField<::Unity::Burst::SharedStatic_1<::MA::Flora::FloraNameStorage_State>, "SharedState", ::MA::Flora::FloraNameStorage>();
}
inline int32_t MA::Flora::FloraNameStorage::get_Entries()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraNameStorage>(),
                        {"get_Entries", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void MA::Flora::FloraNameStorage::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraNameStorage>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void MA::Flora::FloraNameStorage::Shutdown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraNameStorage>(),
                        {"Shutdown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void MA::Flora::FloraNameStorage::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraNameStorage>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void MA::Flora::FloraNameStorage::GetFixedString(int32_t  index, ::by_ref<::Unity::Collections::FixedString64Bytes>  temp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraNameStorage>(),
                        {"GetFixedString", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, index, temp);
}
inline int32_t MA::Flora::FloraNameStorage::GetIndexFromHashAndFixedString(int32_t  hash, ::by_ref<::Unity::Collections::FixedString64Bytes>  fixedString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraNameStorage>(),
                        {"GetIndexFromHashAndFixedString", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, hash, fixedString);
}
inline bool MA::Flora::FloraNameStorage::Contains(::by_ref<::Unity::Collections::FixedString64Bytes>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraNameStorage>(),
                        {"Contains", {}, {::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline bool MA::Flora::FloraNameStorage::Contains(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraNameStorage>(),
                        {"Contains", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline int32_t MA::Flora::FloraNameStorage::GetOrCreateIndex(::by_ref<::Unity::Collections::FixedString64Bytes>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraNameStorage>(),
                        {"GetOrCreateIndex", {}, {::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraNameStorage::FloraNameStorage()   {
}
