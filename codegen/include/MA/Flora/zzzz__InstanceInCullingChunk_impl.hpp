#pragma once
// IWYU pragma private; include "MA/Flora/InstanceInCullingChunk.hpp"
#include "MA/Flora/zzzz__InstanceInCullingChunk_def.hpp"
#include "MA/Flora/zzzz__CullingChunkIndex_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
//  Writing Method size for method: ::MA::Flora::InstanceInCullingChunk.get_None
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::InstanceInCullingChunk (*)()>(&::MA::Flora::InstanceInCullingChunk::get_None)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceInCullingChunk>(),
                        {"get_None", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceInCullingChunk._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::InstanceInCullingChunk::*)(int32_t, int32_t)>(&::MA::Flora::InstanceInCullingChunk::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18149bbb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceInCullingChunk>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceInCullingChunk.get_Chunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::CullingChunkIndex (::MA::Flora::InstanceInCullingChunk::*)()>(&::MA::Flora::InstanceInCullingChunk::get_Chunk)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18149bbc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceInCullingChunk>(),
                        {"get_Chunk", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceInCullingChunk.get_IndexInChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::InstanceInCullingChunk::*)()>(&::MA::Flora::InstanceInCullingChunk::get_IndexInChunk)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18149bbd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceInCullingChunk>(),
                        {"get_IndexInChunk", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceInCullingChunk.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::InstanceInCullingChunk::*)(::MA::Flora::InstanceInCullingChunk)>(&::MA::Flora::InstanceInCullingChunk::CompareTo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a8250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceInCullingChunk>(),
                        {"CompareTo", {}, {::i2c::type_of<::MA::Flora::InstanceInCullingChunk>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceInCullingChunk.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::InstanceInCullingChunk::*)()>(&::MA::Flora::InstanceInCullingChunk::GetHashCode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::InstanceInCullingChunk>(),
                    {::i2c::class_of<::MA::Flora::InstanceInCullingChunk>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceInCullingChunk.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::InstanceInCullingChunk::*)(::MA::Flora::InstanceInCullingChunk)>(&::MA::Flora::InstanceInCullingChunk::Equals)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814bfe20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceInCullingChunk>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::InstanceInCullingChunk>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceInCullingChunk.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::MA::Flora::InstanceInCullingChunk::*)()>(&::MA::Flora::InstanceInCullingChunk::ToString)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1814bfe50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::InstanceInCullingChunk>(),
                    {::i2c::class_of<::MA::Flora::InstanceInCullingChunk>(), 3}
                ));
    return ___internal_method;
  }
};
inline ::MA::Flora::InstanceInCullingChunk MA::Flora::InstanceInCullingChunk::get_None()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceInCullingChunk>(),
                        {"get_None", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::InstanceInCullingChunk>(nullptr, ___internal_method);
}
inline void MA::Flora::InstanceInCullingChunk::_ctor(int32_t  chunk, int32_t  indexInChunk)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceInCullingChunk>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, chunk, indexInChunk);
}
inline ::MA::Flora::CullingChunkIndex MA::Flora::InstanceInCullingChunk::get_Chunk()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceInCullingChunk>(),
                        {"get_Chunk", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::CullingChunkIndex>(*this, ___internal_method);
}
inline int32_t MA::Flora::InstanceInCullingChunk::get_IndexInChunk()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceInCullingChunk>(),
                        {"get_IndexInChunk", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t MA::Flora::InstanceInCullingChunk::CompareTo(::MA::Flora::InstanceInCullingChunk  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceInCullingChunk>(),
                        {"CompareTo", {}, {::i2c::type_of<::MA::Flora::InstanceInCullingChunk>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline int32_t MA::Flora::InstanceInCullingChunk::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::InstanceInCullingChunk>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool MA::Flora::InstanceInCullingChunk::Equals(::MA::Flora::InstanceInCullingChunk  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceInCullingChunk>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::InstanceInCullingChunk>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline ::StringW MA::Flora::InstanceInCullingChunk::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::InstanceInCullingChunk>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IComparable_1<::MA::Flora::InstanceInCullingChunk>"
constexpr  MA::Flora::InstanceInCullingChunk::operator ::System::IComparable_1<::MA::Flora::InstanceInCullingChunk>*()  {
return static_cast<::System::IComparable_1<::MA::Flora::InstanceInCullingChunk>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::MA::Flora::InstanceInCullingChunk>"
constexpr ::System::IComparable_1<::MA::Flora::InstanceInCullingChunk>* MA::Flora::InstanceInCullingChunk::i___System__IComparable_1___MA__Flora__InstanceInCullingChunk_()  {
return static_cast<::System::IComparable_1<::MA::Flora::InstanceInCullingChunk>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::InstanceInCullingChunk>"
constexpr  MA::Flora::InstanceInCullingChunk::operator ::System::IEquatable_1<::MA::Flora::InstanceInCullingChunk>*()  {
return static_cast<::System::IEquatable_1<::MA::Flora::InstanceInCullingChunk>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::MA::Flora::InstanceInCullingChunk>"
constexpr ::System::IEquatable_1<::MA::Flora::InstanceInCullingChunk>* MA::Flora::InstanceInCullingChunk::i___System__IEquatable_1___MA__Flora__InstanceInCullingChunk_()  {
return static_cast<::System::IEquatable_1<::MA::Flora::InstanceInCullingChunk>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Data", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::InstanceInCullingChunk::InstanceInCullingChunk(uint32_t  m_Data) noexcept  {
this->m_Data = m_Data;
}
// Ctor Parameters []
constexpr ::MA::Flora::InstanceInCullingChunk::InstanceInCullingChunk()   {
}
