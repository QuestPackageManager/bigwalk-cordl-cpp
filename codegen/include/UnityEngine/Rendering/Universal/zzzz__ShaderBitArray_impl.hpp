#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ShaderBitArray.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShaderBitArray_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShaderBitArray.get_elemLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::ShaderBitArray::*)()>(&::UnityEngine::Rendering::Universal::ShaderBitArray::get_elemLength)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182127230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ShaderBitArray>(),
                        {"get_elemLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShaderBitArray.get_bitCapacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::ShaderBitArray::*)()>(&::UnityEngine::Rendering::Universal::ShaderBitArray::get_bitCapacity)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182127200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ShaderBitArray>(),
                        {"get_bitCapacity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShaderBitArray.get_data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<float_t> (::UnityEngine::Rendering::Universal::ShaderBitArray::*)()>(&::UnityEngine::Rendering::Universal::ShaderBitArray::get_data)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ShaderBitArray>(),
                        {"get_data", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShaderBitArray.Resize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ShaderBitArray::*)(int32_t)>(&::UnityEngine::Rendering::Universal::ShaderBitArray::Resize)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x182126fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ShaderBitArray>(),
                        {"Resize", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShaderBitArray.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ShaderBitArray::*)()>(&::UnityEngine::Rendering::Universal::ShaderBitArray::Clear)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182126f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ShaderBitArray>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShaderBitArray.GetElementIndexAndBitOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ShaderBitArray::*)(int32_t, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::UnityEngine::Rendering::Universal::ShaderBitArray::GetElementIndexAndBitOffset)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182126f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ShaderBitArray>(),
                        {"GetElementIndexAndBitOffset", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShaderBitArray.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::ShaderBitArray::*)(int32_t)>(&::UnityEngine::Rendering::Universal::ShaderBitArray::get_Item)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1821271b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ShaderBitArray>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShaderBitArray.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ShaderBitArray::*)(int32_t, bool)>(&::UnityEngine::Rendering::Universal::ShaderBitArray::set_Item)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x182127250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ShaderBitArray>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShaderBitArray.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::Universal::ShaderBitArray::*)()>(&::UnityEngine::Rendering::Universal::ShaderBitArray::ToString)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x182127090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::Universal::ShaderBitArray>(),
                    {::i2c::class_of<::UnityEngine::Rendering::Universal::ShaderBitArray>(), 3}
                ));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::Rendering::Universal::ShaderBitArray::get_elemLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ShaderBitArray>(),
                        {"get_elemLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::ShaderBitArray::get_bitCapacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ShaderBitArray>(),
                        {"get_bitCapacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::ArrayW<float_t> UnityEngine::Rendering::Universal::ShaderBitArray::get_data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ShaderBitArray>(),
                        {"get_data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ShaderBitArray::Resize(int32_t  bitCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ShaderBitArray>(),
                        {"Resize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bitCount);
}
inline void UnityEngine::Rendering::Universal::ShaderBitArray::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ShaderBitArray>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ShaderBitArray::GetElementIndexAndBitOffset(int32_t  index, ::by_ref<int32_t>  elemIndex, ::by_ref<int32_t>  bitOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ShaderBitArray>(),
                        {"GetElementIndexAndBitOffset", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, elemIndex, bitOffset);
}
inline bool UnityEngine::Rendering::Universal::ShaderBitArray::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ShaderBitArray>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, index);
}
inline void UnityEngine::Rendering::Universal::ShaderBitArray::set_Item(int32_t  index, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ShaderBitArray>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
inline ::StringW UnityEngine::Rendering::Universal::ShaderBitArray::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::Universal::ShaderBitArray>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Data", ty: "::ArrayW<float_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::ShaderBitArray::ShaderBitArray(::ArrayW<float_t>  m_Data) noexcept  {
this->m_Data = m_Data;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ShaderBitArray::ShaderBitArray()   {
}
