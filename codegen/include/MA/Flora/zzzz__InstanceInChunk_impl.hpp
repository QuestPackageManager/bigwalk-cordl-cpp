#pragma once
// IWYU pragma private; include "MA/Flora/InstanceInChunk.hpp"
#include "MA/Flora/zzzz__ChunkIndex_impl.hpp"
#include "MA/Flora/zzzz__InstanceInChunk_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
//  Writing Method size for method: ::MA::Flora::InstanceInChunk.get_None
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::InstanceInChunk (*)()>(&::MA::Flora::InstanceInChunk::get_None)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceInChunk>(),
                        {"get_None", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceInChunk.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::InstanceInChunk::*)(::MA::Flora::InstanceInChunk)>(&::MA::Flora::InstanceInChunk::CompareTo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814820e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceInChunk>(),
                        {"CompareTo", {}, {::i2c::type_of<::MA::Flora::InstanceInChunk>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceInChunk.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::InstanceInChunk::*)()>(&::MA::Flora::InstanceInChunk::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18147c820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::InstanceInChunk>(),
                    {::i2c::class_of<::MA::Flora::InstanceInChunk>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceInChunk.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::InstanceInChunk::*)(::MA::Flora::InstanceInChunk)>(&::MA::Flora::InstanceInChunk::Equals)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181482100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceInChunk>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::InstanceInChunk>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceInChunk.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::MA::Flora::InstanceInChunk::*)()>(&::MA::Flora::InstanceInChunk::ToString)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181482130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::InstanceInChunk>(),
                    {::i2c::class_of<::MA::Flora::InstanceInChunk>(), 3}
                ));
    return ___internal_method;
  }
};
inline ::MA::Flora::InstanceInChunk MA::Flora::InstanceInChunk::get_None()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceInChunk>(),
                        {"get_None", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::InstanceInChunk>(nullptr, ___internal_method);
}
inline int32_t MA::Flora::InstanceInChunk::CompareTo(::MA::Flora::InstanceInChunk  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceInChunk>(),
                        {"CompareTo", {}, {::i2c::type_of<::MA::Flora::InstanceInChunk>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline int32_t MA::Flora::InstanceInChunk::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::InstanceInChunk>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool MA::Flora::InstanceInChunk::Equals(::MA::Flora::InstanceInChunk  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceInChunk>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::InstanceInChunk>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline ::StringW MA::Flora::InstanceInChunk::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::InstanceInChunk>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IComparable_1<::MA::Flora::InstanceInChunk>"
constexpr  MA::Flora::InstanceInChunk::operator ::System::IComparable_1<::MA::Flora::InstanceInChunk>*()  {
return static_cast<::System::IComparable_1<::MA::Flora::InstanceInChunk>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::MA::Flora::InstanceInChunk>"
constexpr ::System::IComparable_1<::MA::Flora::InstanceInChunk>* MA::Flora::InstanceInChunk::i___System__IComparable_1___MA__Flora__InstanceInChunk_()  {
return static_cast<::System::IComparable_1<::MA::Flora::InstanceInChunk>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::InstanceInChunk>"
constexpr  MA::Flora::InstanceInChunk::operator ::System::IEquatable_1<::MA::Flora::InstanceInChunk>*()  {
return static_cast<::System::IEquatable_1<::MA::Flora::InstanceInChunk>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::MA::Flora::InstanceInChunk>"
constexpr ::System::IEquatable_1<::MA::Flora::InstanceInChunk>* MA::Flora::InstanceInChunk::i___System__IEquatable_1___MA__Flora__InstanceInChunk_()  {
return static_cast<::System::IEquatable_1<::MA::Flora::InstanceInChunk>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Chunk", ty: "::MA::Flora::ChunkIndex", modifiers: "", def_value: Some("{}") }, CppParam { name: "IndexInChunk", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::InstanceInChunk::InstanceInChunk(::MA::Flora::ChunkIndex  Chunk, int32_t  IndexInChunk) noexcept  {
this->Chunk = Chunk;
this->IndexInChunk = IndexInChunk;
}
// Ctor Parameters []
constexpr ::MA::Flora::InstanceInChunk::InstanceInChunk()   {
}
